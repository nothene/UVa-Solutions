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

ll N, T, M, K, caseNo = 1;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		vector<ll> V(N);
		forn(i, N) cin >> V[i];
		ll ans = 0;
		for(ll i = 0; i < N; i++){
			ll tmp = V[i];
			ans = max(ans, tmp);
			for(ll j = i+1; j < N; j++){
				tmp *= V[j];
				ans = max(ans, tmp);
			}
		}
		cout << "Case #" << caseNo << ": The maximum product is " << ans << ".\n\n";
		caseNo++;
	}
    return 0;
}
