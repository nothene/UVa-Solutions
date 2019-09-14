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

int N, T, M, K;
set<vi> vset;

void recur(vi V, vi v, int id, int sum){
	if(sum == T){
		vset.insert(v); return;
	}
	if(id == N) return;
	v.pb(V[id]);
	recur(V, v, id+1, sum+V[id]);
	v.pop_back();
	recur(V, v, id+1, sum);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> T >> N){
		if(T == 0 && N == 0) break;
		vi V(N); vset.clear();
		forn(i, N) cin >> V[i];
		cout << "Sums of " << T << ":\n";
		recur(V, vi(), 0, 0);
		if(vset.empty()) cout << "NONE\n";
		else{
			set<vi>::reverse_iterator it;
			for(it = vset.rbegin(); it != vset.rend(); ++it){
				for(int i = 0; i < it->size(); i++){
					if(i > 0) cout << "+";
					cout << (*it)[i];
				} cout << endl;
			}
		}
	}
    return 0;
}
