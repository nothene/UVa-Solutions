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
    int n, m, in, ans;
    while(cin>>n>>m){
    	if(n == 0 && m == 0) return 0;
    	unordered_map<int, int> a; ans = 0;
    	while(n--){
    		cin>>in; a[in] = 1;
		}
		while(m--){
			cin>>in; if(a[in]) ans++;
		}
		cout<<ans<<endl;
	}
    return 0;
}
