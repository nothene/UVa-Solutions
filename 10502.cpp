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
char grid[105][105];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		cin >> M;
		forn(i, N) cin >> grid[i];
		int ans = 0;
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				for(int k = i; k < N; k++){
					for(int l = j; l < M; l++){
						bool ok = true;
						for(int a = i; a <= k && ok; a++){
							for(int b = j; b <= l && ok; b++){
								if(grid[a][b] == '0') ok = false;
							}
						}
						if(ok) ans++;
					}
				}
			}
		}
		cout << ans << endl;
	}
    return 0;
}
