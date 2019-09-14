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

int N, T;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> N;
	while(N--){
		cin >> T;
		vi V(T); int ans = 0;
		forn(i, T) cin >> V[i];
		for(int i = 1; i < T; i++){
			for(int j = 0; j < i; j++){
				if(V[j] <= V[i]) ans++;
			}
		}
		cout << ans << endl;
	}
    return 0;
}
