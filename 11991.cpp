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
	int n, m, k, v, in;	map<int, vi> adj;
	while(cin>>n>>m){
		for(int i = 0; i < n; i++){
			cin>>in; adj[in].pb(i);
		}
		for(int j = 0; j < m; j++){
			cin>>k>>v;
			if(adj[v].size() < k){ cout<<0<<endl; continue; }
			cout<<adj[v][k-1]+1<<endl;
		}	
	}
    return 0;
}
