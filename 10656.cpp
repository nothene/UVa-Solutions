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
    ll n, in;
    while(cin>>n){
        if(n == 0) return 0;
        vi a;
        for(int i = 0; i < n; i++){
            cin>>in; if(in == 0) continue; 
            a.pb(in);
        }
        if(a.empty()){ cout<<"0\n"; continue; }
        for(int i = 0; i < a.size(); i++){
            cout<<a[i]; if(i == a.size()-1) cout<<endl; else cout<<" ";
        }
    }
    return 0;
}