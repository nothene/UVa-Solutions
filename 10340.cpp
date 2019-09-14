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
    int a, b, j; bool ok;
    string s, t;
    while(cin>>s>>t){
        a = s.size(); b = t.size(); j = 0; ok = true;
        for(int i = 0; i < a; i++){
            while(s[i] != t[j] && j < b){
                j++;
            }
            if(s[i] == t[j]){ j++; continue; }
            if(j == b){ ok = false; break; }
        }
        if(ok) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}