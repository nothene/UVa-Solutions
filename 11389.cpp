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
    int n, d, r, in, ans;
    while(cin>>n>>d>>r){
        if(n == 0 && d == 0 && r == 0) return 0;
        vi a, b; ans = 0;
        for(int i = 0; i < n; i++) cin>>in, a.pb(in);
        for(int i = 0; i < n; i++) cin>>in, b.pb(in);
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        for(int i = 0; i < n; i++){
            ans += max(0, ((a[i]+b[i])-d))*r;
        }
        cout<<ans<<endl;
    }
    return 0;
}