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

int N, T, M, K, caseNo = 1;

struct node{
	int a, b, c;
	node(int x, int y, int z){
		a = x, b = y, c = z;
	}
};

bool comp(node p, node q){
	if(p.a == q.a){
		if(p.b == q.b){
			return p.c < q.c;
		} else return p.b < q.b;
	} else return p.a < q.a;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		vector< vector<int> > V(N, vector<int>(N, 0));
		vector<node> chain;
		forn(i, N) forn(j, N) cin >> V[i][j];
		for(int a = 0; a < N; a++)
			for(int b = 0; b < N; b++)
				for(int c = 0; c < N; c++){
					if(V[a][b] == 1 && V[b][c] == 1 && V[c][a] == 1){
						if(a < b && b < c){
							chain.pb(node(a+1, b+1, c+1));
							//cout << a+1 << " " << b+1 << " " << c+1 << endl;
						} else if(a > b && b > c){
							chain.pb(node(a+1, b+1, c+1));
							//cout << a+1 << " " << b+1 << " " << c+1 << endl;	
						}
					}
				}
		sort(chain.begin(), chain.end(), comp);
		forn(i, chain.size()){
			cout << chain[i].a << " " << chain[i].b << " " << chain[i].c << endl;
		}
		cout << "total:" << chain.size() << endl << endl;
		caseNo++;
	}
    return 0;
}
