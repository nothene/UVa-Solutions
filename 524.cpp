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

int N, T, M, K, caseNo = 1;

ll _sieve_size;
bitset<10000010> bs;
vector<ll> primes;

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

void recur(vi V, bitset<32> bt){
	if(bt.count() == N && V.size() == N && isPrime(V[0]+V.back())){
		forn(i, V.size()){
			if(i > 0) cout << " ";
			cout << V[i];
		} cout << endl; return;
	}
	for(int i = 2; i <= N; i++){
		if(!bt[i] && isPrime(V.back()+i)){
			//cout << "V size: " << V.size << " " << bt << endl;
			bt[i] = 1; V.pb(i);
			recur(V, bt);
			V.pop_back(); bt[i] = 0;
		}
	}
	return;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    sieve(100);
	while(cin >> N){
		if(caseNo > 1) cout << endl;
		cout << "Case " << caseNo << ":\n";
		if(N > 0){
			vi V; V.pb(1);
			bitset<32> bt; bt.reset(); bt[1] = 1;
			recur(V, bt);	
		}
		caseNo++;
	}
    return 0;
}
