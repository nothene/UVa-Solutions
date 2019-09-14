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

int N, T, M, K = 0;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		//if(K > 0) cout << endl;
		vi V(N); ii p = {0, INF};
		forn(i, N) cin >> V[i];
		cin >> M;
		sort(V.begin(), V.end());
		forn(i, N){
			if(M-V[i] >= 0){
				vector<int>::iterator n = lower_bound(V.begin(), V.end(), M-V[i]);
				if(*n + V[i] == M && *n <= V[i]){
					if(abs(*n-V[i]) < abs(p.ff-p.ss) && *n > 0 && n-V.begin() != i){
						p = {*n, V[i]};
					}
					//cout << "num: " << *n << " " << V[i] << endl;		
				}
			}
		}
		cout << "Peter should buy books whose prices are " << p.ff << " and " << p.ss << ".\n\n";
		K++;
	}
    return 0;
}
