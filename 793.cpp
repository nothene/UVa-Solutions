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

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, t, i, j;
    char line[100], c;
    scanf("%d\n\n", &n);
    while(n--){
    	int a = 0, b = 0;
    	scanf("%d\n", &t);
    	UnionFind udfs(t);
    	while(fgets(line, 100, stdin) && sscanf(line, " %c %d %d", &c, &i, &j) == 3){
    		if(c == 'c'){
    			udfs.unionSet(i, j);
			} else if(c == 'q'){
				if(udfs.isSameSet(i, j)) a++;
				else b++;
			}
		}
		printf("%d,%d\n", a, b);
		if(n) printf("\n");
	}
    return 0;
}
