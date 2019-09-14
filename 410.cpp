#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define INF 1000000000
#define mp make_pair
#define pb push_back

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    double C, S, in, n = 1, imba, ave; vi a;
    while(cin>>C>>S){
        a.clear(); ave = 0, imba = 0;
        if(S < 2*C) for(int i = 0; i < (2*C-S); i++) a.pb(0);
        forn(i, S) cin>>in, a.pb(in), ave += in;
        ave /= C;
        sort(a.begin(), a.end());
        cout<<"Set #"<<n++<<endl;
        forn(i, C){
            cout<<" "<<i<<":"; 
            if(a[2*C-i-1] != 0) cout<<" "<<a[2*C-i-1]; 
            if(a[i] != 0) cout<<" "<<a[i]<<endl; else cout<<endl;
            imba += abs((a[2*C-i-1]+a[i])-ave);
        }
        printf("IMBALANCE = %.5f\n\n", imba);
    }
    return 0;
}