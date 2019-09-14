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

ll N, T;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    while(cin >> N){
    	if(N == 0) break;
    	multiset<ll> mset; ll in, ans = 0;
		forn(i, N){
			cin >> T;
			forn(j, T){
				cin >> in;
				mset.insert(in);
			}
			ans += *(--mset.end()) - *(mset.begin());
			mset.erase(mset.begin());
			mset.erase(--mset.end());
		}
		cout << ans << endl;
	}
    return 0;
} 

