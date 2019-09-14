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

class UnionFind{
	vi p, rank, setSize;
	int numSets;
  public:
	UnionFind(int N){
		rank.assign(N+1, 0); numSets = N;
		p.assign(N+1, 0); for(int i = 1; i <= N; i++) p[i] = i;
	}
	int findSet(int i){
		return (p[i] == i) ? i : (p[i] = findSet(p[i]));
	}
	bool isSameSet(int i, int j){
		return (findSet(i) == findSet(j));
	}
	void unionSet(int i, int j){
		if(!isSameSet(i, j)){
			int x = findSet(i), y = findSet(j);
			if(rank[x] > rank[y]){
				p[y] = x;
			} else{
				p[x] = y; if(rank[x] == rank[y]) rank[y]++;
			}
		}
	}
	int sizeOfSet(int i){
		return setSize[findSet(i)];
	}
};

bool visited[256] = {false};

int bfs(vector<int> adj[], char s){
	queue<char> q; int count = 1;
	q.push(s); visited[s] = true;
	while(!q.empty()){
		int p = q.front(); q.pop();
		for(int i = 0; i < adj[p].size(); i++){
			if(!visited[(int)adj[p][i]]){
				visited[(int)adj[p][i]] = true;
				count++;
				q.push(adj[p][i]);
			} 
		}
	}
	return count;
}

int main(){
	int n; char s[105];
	cin>>n;
	forn(i, n){
		vector<int> adj[300]; int acorns = 0, trees = 0;
		while(1){
			cin>>s;
			if(s[0] == '*' || s[1] == '*'){
				break;
			} 
			adj[s[1]].pb(s[3]);
			adj[s[3]].pb(s[1]);
		}
		cin>>s;
		for(int i = 0; i <= strlen(s); i+=2){
			if(!visited[s[i]]){
				if(bfs(adj, s[i]) == 1) acorns++;
				else trees++;
			}
		}
		cout<<"There are "<<trees<<" tree(s) and "<<acorns<<" acorn(s).\n";
		memset(visited, false, 256);
	}
	return 0;
}
