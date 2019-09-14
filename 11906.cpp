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

int N, T, M, K, R, C, W;
int grid[105][105];
bool visited[100000];
int xMove[] = {0, 1, 0, -1};
int yMove[] = {1, 0, -1, 0};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	for1(_, T){
		memset(grid, 0, sizeof grid);
		memset(visited, false, sizeof visited);
		cin >> R >> C >> M >> N >> W;
		forn(i, W){
			int x, y;
			cin >> x >> y;
			grid[x][y] = -1;
		}
		int odd = 0, even = 0;
		queue<ii> q; q.push({0, 0}); visited[0] = true;
		while(!q.empty()){
			ii s = q.front(); q.pop();
			forn(i, 4){
				int a = s.ff + xMove[i]*N;
				int b = s.ss + yMove[i]*M;
				if(a >= 0 && a < R && b >= 0 && b < C && grid[a][b] != -1 && !visited[a*1000+b]){
					grid[s.ff][s.ss]++;
					q.push({a, b});
					visited[a*1000+b] = true;
					cout << a*1000+b << endl;
				}
			}
			forn(i, 4){
				int a = s.ff + xMove[i]*N;
				int b = s.ss + yMove[i]*M;
				if(a >= 0 && a < R && b >= 0 && b < C && grid[a][b] != -1 && !visited[a*1000+b]){
					grid[s.ff][s.ss]++;
					q.push({a, b});
					visited[a*1000+b] = true;
				}
			}
			if(grid[s.ff][s.ss] % 2) odd++; else even++;
		} cout << endl;
		forn(i, R){
			forn(j, C){
				cout << grid[i][j] << " ";
			} cout << endl;
		}
		cout << "Case " << _ << ": " << even << " " << odd << endl;
	}
    return 0;
}
