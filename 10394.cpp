#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define BUG(x) cout<<x<<endl;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second

int N, T, M, K;

ll _sieve_size;
bitset<20000010> bs;
vector<ll> primes;
vi prime_pairs;

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
    sieve(20000010);
    forn(i, primes.size()-1){
    	if(primes[i]+2 == primes[i+1]){
    		prime_pairs.pb(primes[i]);
		}
	}
	while(cin >> N){
		cout << "(" << prime_pairs[N-1] << ", " << prime_pairs[N-1]+2 << ")\n";
	}
    return 0;
}
