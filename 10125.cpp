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
	while(cin >> N){
		if(N == 0) break;
		vi V(N);
		forn(i, N) cin >> V[i];
		sort(V.begin(), V.end());
		int ans = -INF; bool ok = true;
		for(int d = N-1; d >= 0 && ok; d--){
			for(int b = N-1; b >= 0 && ok; b--){
				for(int a = 0; a < N && ok; a++){
					if(a != d && b != d && b != a){
						int c = V[d] - (V[a] + V[b]);
						if(V[b] != c && c != V[d] && c != V[a] && binary_search(V.begin(), V.end(), c)){
							ans = V[d];
							ok = false; break;							
						}
					}
				}								
			}
		}
		if(ans == -INF) cout << "no solution\n";
		else cout << ans << endl;
	}
    return 0;
}
