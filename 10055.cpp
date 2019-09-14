#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define INF 1000000000
#define MP make_pair
#define PB push_back

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll a, b;
    while(cin>>a>>b){
        cout<<abs(a-b)<<endl;
    }
    return 0;
}