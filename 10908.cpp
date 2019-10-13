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

int N, T, M, K, Q;
char grid[100][100];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 	cin >> T;
 	forn(_, T){
 		cin >> N >> M >> Q;
 		forn(i, N){
 			forn(j, M){
 				cin >> grid[i][j];
			}
		}
		cout << N << " " << M << " " << Q << endl;
		forn(_, Q){
			int ans = 0, r, c;
			cin >> r >> c;
			for(int i = 1; i <= N/2 || i <= M/2; i++){
				if(r-i < 0 || r+i >= N || c-i < 0 || c+i >= M) continue;
				int cnt = 0, ok = 1;
				for(int a = r-i; a <= r+i && ok; a++){
					for(int b = c-i; b <= c+i && ok; b++){
						//cout << grid[a][b] << endl;
						if(grid[a][b] == grid[r][c]) cnt++;
						else ok = 0;
					}
					//cout << endl;
				}
				if(ok && cnt == pow(2*i+1, 2)){
					ans = i;
				} 
			}
			cout << 2*ans+1 << endl;
		}
	}
    return 0;
}
