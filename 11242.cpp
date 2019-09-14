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

int N, T, M, K, f, r;

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    while(cin >> f){
    	if(f == 0) break;
    	cin >> r;
    	vector<double> front(f), rear(r), ratio;
    	forn(i, f) cin >> front[i];
    	forn(i, r) cin >> rear[i];
    	forn(i, f){
    		forn(j, r){
    			ratio.pb(rear[j]/front[i]);
			}
		}
		sort(ratio.begin(), ratio.end());
		double ans = 0;
		forn(i, ratio.size()-1){
			ans = max(ans, ratio[i+1]/ratio[i]);
		}
		printf("%.2lf\n", ans);
	}
    return 0;
}
