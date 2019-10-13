#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define pb push_back
#define ff first
#define ss second

ll N, T, M, K;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> K){
		long double ans = 0;
		for(ll i = N-K+1; i <= N; i++){
			ans += log10(i);
		}
		for(ll i = 2; i <= K; i++){
			ans -= log10(i);
		}
		cout << ((ll)ans) + 1 << endl;
	}
    return 0;
}
