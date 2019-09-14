#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, n, m, x, y;
    while(cin>>k){
        if(k == 0){ return 0; }
        cin>>n>>m;
        while(k--){ cin>>x>>y; if(x == n || y == m){ cout<<"divisa\n"; continue; }
            if(x < n){ if(y < m) cout<<"SO\n"; else cout<<"NO\n";
            } else{ if(y < m) cout<<"SE\n"; else cout<<"NE\n"; }
        }
    }
}