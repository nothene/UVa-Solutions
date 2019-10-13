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
    while(cin >> N){
 		ll n = (N-1)/2 + 1;
		ll sn = n * ((1+N) / 2);
		ll a1 = 1 + (sn-3) * 2, a3 = 1 + (sn-1) * 2;
		ll ans = 3 * ((a1 + a3) / 2);
		cout << ans << endl;
	}
    return 0;
}
