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
string s, t;

class UnionFind {                                // OOP style
private:
  vi p, rank, setSize;                           // vi p is the key part
  int numSets;
public:
  UnionFind(int N) {
    p.assign(N+1, 0); for (int i = 1; i <= N; ++i) p[i] = i;
    rank.assign(N+1, 0);                           // optional speedup
    setSize.assign(N+1, 1);                        // optional feature
    numSets = N;                                 // optional feature
  }

  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }

  int numDisjointSets() { return numSets; }      // optional
  int sizeOfSet(int i) { return setSize[findSet(i)]; } // optional

  void unionSet(int i, int j) {
    if (isSameSet(i, j)) return;                 // i and j are in same set
    int x = findSet(i), y = findSet(j);          // find both rep items
    if (rank[x] > rank[y]) swap(x, y);           // keep x 'shorter' than y
    p[x] = y;                                    // set x under y
    if (rank[x] == rank[y]) ++rank[y];           // optional speedup
    setSize[y] += setSize[x];                    // combine set sizes at y
    --numSets;                                   // a union reduces numSets
  }
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	forn(_, T){
		cin >> N; vector<pair<string, string> > vs; map<string, int> names;
		int cur = 1;
		forn(_, N){
			cin >> s >> t;
			vs.pb({s, t});
			if(!names[s]) names[s] = cur, cur++;
			if(!names[t]) names[t] = cur, cur++;
		}
		UnionFind ufds(cur);
		forn(i, N){
			ufds.unionSet(names[vs[i].ff], names[vs[i].ss]);
			cout << ufds.sizeOfSet(names[vs[i].ff]) << endl;
		}
	}
    return 0;
}
