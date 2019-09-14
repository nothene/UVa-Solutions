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
char grid[1000][1000];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		for(int i = 0; i < N; i++){
			cin >> grid[i];
		}
		int ans = 0;
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				int tans = 0;
				if(grid[i][j] == '1'){
					tans = INF;
					for(int k = 0; k < N; k++){
						for(int l = 0; l < N; l++){
							if(grid[k][l] == '3'){
								tans = min(tans, abs(i-k)+abs(j-l));
							}
						}
					}
				}
				ans = max(ans, tans);
			}
		}
		cout << ans << endl;
	}
    return 0;
}
