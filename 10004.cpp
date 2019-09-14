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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m, a, b;
    while(cin>>n){
        if(n == 0) return 0;
        vi AdjList[205];
        cin>>m;
        forn(i, m) cin>>a>>b, AdjList[a].pb(b), AdjList[b].pb(a);
        queue<int> q; q.push(0);
        vi color(n, INF); color[0] = 0; bool isB = true;
        while(!q.empty() && isB){
            int u = q.front(); q.pop();
            for(int j = 0; j < (int)AdjList[u].size(); j++){
                int v = AdjList[u][j];
                if(color[v] == INF){
                    color[v] = 1 - color[u];
                    q.push(v);
                } else if(color[v] == color[u]){
                    isB = false; break;
                }
            }
        }
        if(isB) cout<<"BICOLORABLE.\n";
        else cout<<"NOT BICOLORABLE.\n";
    }
    return 0;
}