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

int N, T, M, K, row, col, cmd;
char dir[] = {'N', 'E', 'S', 'W'};
int xMove[] = {-1, 0, 1, 0};
int yMove[] = {0, 1, 0, -1};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> row >> col >> cmd){
		if(row == 0 && col == 0 && cmd == 0) break;
		char grid[105][105]; string s; bool visited[105][105] = {false};
		char cface; int x, y, face;
		forn(i, row) forn(j, col){
			cin >> grid[i][j];
			if(grid[i][j] != '#' && grid[i][j] != '.' && grid[i][j] != '*'){
				cface = grid[i][j]; x = i; y = j;
				grid[i][j] = '.';
			}
		}
		if(cface == 'N') face = 0;
		if(cface == 'L') face = 1;
		if(cface == 'S') face = 2;
		if(cface == 'O') face = 3;
		int ans = 0;
		cin >> s;
		forn(i, s.size()){
			if(s[i] == 'D'){
				face++;
				if(face == 4) face = 0;
			} else if(s[i] == 'E'){
				face--;
				if(face == -1) face = 3;
			} else{
				int cur_x = x + xMove[face], cur_y = y + yMove[face];
				if(cur_x >= 0 && cur_x < row && cur_y >= 0 && cur_y < col){
					if(grid[cur_x][cur_y] != '#'){
						if(grid[cur_x][cur_y] == '*' && !visited[cur_x][cur_y]){
							ans++; visited[cur_x][cur_y] = true;
						}
						x = cur_x; y = cur_y;
					}
				}
			}
			//cout << "x: " << x << endl << "y: " << y << endl << "face: " << face << endl << "ans: " << ans << endl;
		}
		cout << ans << endl;
	}
    return 0;
}
