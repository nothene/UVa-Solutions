#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define INF 1000000000
#define MP make_pair

int a, b, m, n, countx;
int dir[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, -1}, {-1, 1}, {1, -1}};
char mapx[105][105];

void bfs(ii pos, bool visited[105][105]){
    queue<ii> q;
    visited[pos.first][pos.second] = true;
    q.push(MP(pos.first, pos.second));
    while(!q.empty()){
        ii s = q.front(); q.pop();
        for(int i = 0; i < 8; i++){
            a = s.first + dir[i][0];
            b = s.second + dir[i][1];
            if(a >= 0 && b >= 0 && a < m && b < n){
                if(mapx[a][b] == '@' && !visited[a][b]){
                    visited[a][b] = true;
                    //cout<<a<<" "<<b<<endl;
                    q.push(MP(a, b));
                }
            }
        }
    }
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    while(cin>>m>>n){
        if(m == 0) return 0;
        countx = 0;
        bool visited[105][105] = {false};
        forn(i, m) scanf("%s", &mapx[i]);
        forn(i, m){
            forn(j, n){
                if(mapx[i][j] == '@' && !visited[i][j]){
                    bfs(MP(i, j), visited); countx++;
                }
            }
        }
        cout<<countx<<endl;
    }
    return 0;
}