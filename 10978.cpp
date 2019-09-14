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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		vector<string> V(N+1, ""); int pos = 0;
		forn(_, N){
			cin >> s >> t;
			int cur = t.size();	
			while(1){
				if(V[pos] == "") cur--;
				if(V[pos] == "" && cur == 0){
					V[pos] = s; break;
				}
				pos++;
				if(pos == N) pos = 0;
			}
			/*while(1){
				if(V[pos] == "" && cur == 0){
					V[pos] = s; break;
				}	
				if(pos == N) pos = 0;			
				pos++; 
				if(V[pos] == "") cur--;
			}*/			
		}
		forn(i, N){
			if(i > 0) cout << " ";
			cout << V[i];
		} cout << endl;
	}
    return 0;
}
