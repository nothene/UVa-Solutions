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
	forn(_, T){
		int grid[11][11] = {0};
		for(int i = 1; i <= 9; i += 2){
			for(int j = 1; j <= i; j += 2){
				cin >> grid[i][j];
			}	
		}
		for(int i = 3; i <= 9; i += 2){
			for(int j = 2; j <= i; j += 2){
				grid[i][j] = (grid[i-2][j-1] - (grid[i][j-1] + grid[i][j+1])) / 2;
			}
		}
		for(int i = 2; i <= 9; i += 2){
			for(int j = 1; j <= i; j++){
				grid[i][j] = grid[i+1][j] + grid[i+1][j+1];
			}
		}
		for(int i = 1; i <= 9; i++){
			for(int j = 1; j <= i; j++){
				if(j > 1) cout << " ";
				cout << grid[i][j];
			} cout << endl;
		}
	}
    return 0;
}
