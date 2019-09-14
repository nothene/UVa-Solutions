#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define INF 1000000000
#define MP make_pair

bool visited[105];
vi ts;

void dfs(int u, vi adj[]){
    visited[u] = true;
    forn(j, adj[u].size()){
        int v = adj[u][j];
        if(!visited[v]) dfs(v, adj);
    }
    ts.push_back(u);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m, a, b; bool first = true;
    while(cin>>n>>m){
        if(n == 0 && m == 0) return 0;
        ts.clear();
        vi adj[105];
        memset(visited, false, sizeof visited); 
        for(int i = 1; i <= m; i++){ 
            cin>>a>>b; adj[a].push_back(b); 
        }
        for(int i = 1; i <= n; i++){ 
            if(!visited[i]) dfs(i, adj); 
        }
        int len = ts.size();
        for(int j = len-1; j >= 0; j--){
            cout<<ts[j]; if(j > 0) cout<<" ";
        } cout<<endl;
    }
    return 0;
}