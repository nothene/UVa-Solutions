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

int N, T, P, Q, D, L, H;
string M;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	int c = T;
	forn(i, T){
		if(i > 0) cout << endl;
		cin >> D;
		vector<string> database(D);
		vii V(D);
		forn(i, D){
			cin >> M >> L >> H;
			database[i] = M; V[i] = mp(L, H);
		}
		cin >> Q;
		forn(i, Q){
			cin >> P; int idx = -1; bool ok = false;
			for(int j = 0; j < D; j++){
				if(V[j].first <= P && P <= V[j].second){
					if(!ok){
						idx = j, ok = true;	
					} 
					else{
						idx = -1; break;
					}
				}
			}
			if(idx == -1) cout << "UNDETERMINED\n";
			else cout << database[idx] << endl;
		}
	}
    return 0;
}
