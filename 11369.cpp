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

int N, T, M, K;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 	cin >> T;
	forn(_, T)   {
		cin >> N;
		vi V(N);
		forn(i, N) cin >> V[i];
		sort(V.rbegin(), V.rend());
		ll ans = 0;
		for(int i = 2; i < V.size(); i+=3) ans += V[i];
		cout << ans << endl;
	}
    return 0;
}
