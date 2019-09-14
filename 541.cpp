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
		int grid[105][105] = {0};
		forn(i, N){
			forn(j, N){
				cin >> grid[i][j];
			}
		}
		vi row(N), col(N); 
		forn(i, N){
			int sum_row = 0, sum_col = 0;
			forn(j, N){
				sum_row += grid[i][j];
			}
			forn(j, N){
				sum_col += grid[j][i];
			}
			row[i] = sum_row;
			col[i] = sum_col;
		}
		
		int chance = 1, state = 0, x, y; bool change = true;
		forn(i, N){
			forn(j, N){
				if(row[i]%2 && col[j]%2 && change){
					row[i]--; col[j]--; change = false;
					x = i, y = j; state = 1;
				}
			}
		}
		forn(i, N){
			forn(j, N){
				if(row[i]%2 || col[j]%2){
					state = 2;
				}
			}
		}
		if(state == 0) cout << "OK\n";
		else if(state == 1) cout << "Change bit (" << x+1 << "," << y+1 << ")\n";
		else cout << "Corrupt\n";
	}
    return 0;
}
