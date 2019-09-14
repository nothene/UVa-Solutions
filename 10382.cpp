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

bool comp(ii a, ii b){
    if(a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, l, w, dx, r, pos;
    while(cin>>n>>l>>w){
        vii interval;
        for(int i = 0; i < n; i++){
            cin>>pos>>r;
            dx = sqrt(pow(r, 2)-pow((w/2), 2));
            interval.pb({pos-dx, pos+dx});
        }
        sort(interval.begin(), interval.end());
        
    }
    return 0;
}