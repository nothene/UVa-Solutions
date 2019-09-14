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
    int t, n, ans; string s;
    bool visited[105];
    cin>>t;
    for(int i = 1; i <= t; i++){
        memset(visited, false, sizeof visited); ans = 0;
        cin>>n>>s;
        for(int j = 1; j < n; j++){

        }
        //cout<<s<<endl;
        if(s[n-1] == '.' || s[n-2] == '.' || s[n-3] == '.')
            if(!visited[n-1] || !visited[n-2] || !visited[n-3])
                ans++;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}