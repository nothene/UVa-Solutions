#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define BUG(x) cout<<x<<endl;
#define mp make_pair
#define pb push_back

int N, T, l, r;
ll _sieve_size;
bitset<10000010> bs;
vll primes;

void sieve(ll upperbound){
  _sieve_size = upperbound+1;
  bs.set();
  bs[0] = bs[1] = 0;
  for (ll i = 2; i < _sieve_size; i++) if (bs[i]) {
    for (ll j = i*i; j < _sieve_size; j += i) bs[j] = 0;
    primes.push_back(i);
} }

bool isPrime(ll N) {
  if (N < _sieve_size) return bs[N];
  for (int i = 0; (i < primes.size()) && (primes[i]*primes[i] <= N); i++)
    if (N%primes[i] == 0) return false;
  return true;           
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    sieve(10000000);
	while(cin >> l >> r){
		int i, j, minn = INF, maxn = 0, prev_p = -1, cur_p = -1, diff;
		ii minp, maxp;
		for(int i = l; i <= r; i++){
			if(isPrime(i)){
				cur_p = i;
				if(prev_p != -1){
					diff = abs(cur_p-prev_p);
					if(diff < minn){
						minn = diff;
						minp = {prev_p, cur_p};
					}
					if(diff > maxn){
						maxn = diff;
						maxp = {prev_p, cur_p};
					}
				}
				prev_p = cur_p;
			}
		}
		if(minp.first && minp.second && maxp.first && maxp.second)
		cout << minp.first << "," << minp.second << " are closest, " <<
				maxp.first << "," << maxp.second << " are most distant." << endl;
		else cout << "There are no adjacent primes.\n";
	}
    return 0;
}
