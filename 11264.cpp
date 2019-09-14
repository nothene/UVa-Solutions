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
    ll n, t, in, sum, ans;
    cin >> n;
    while(n--){
        cin >> t;
        sum = 1; ans = t > 1 ? 2 : 1;
        vi V(t);
        forn(i, t){
        	cin >> V[i];
		}
        for(int i = 1; i < t-1; i++){
            if(sum+V[i] < V[i+1]){
                sum += V[i]; ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
