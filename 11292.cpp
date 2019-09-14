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
    int n, m, in, gold, d, k;
    while(cin>>n>>m){
        if(n == 0 && m == 0) return 0;
        vi dragon, knight;
        gold = d = k = 0;
        for(int i = 0; i < n; i++){ cin>>in; dragon.pb(in); }
        for(int j = 0; j < m; j++){ cin>>in; knight.pb(in); }
        sort(dragon.begin(), dragon.end());
        sort(knight.begin(), knight.end());
        while(d < n && k < m){
            while(dragon[d] > knight[k] && k < m) k++;
            if(k == m) break;
            gold += knight[k];
            d++; k++;
        }

        if(d == n) cout<<gold<<endl;
        else cout<<"Loowater is doomed!\n";
    }
    return 0;
}