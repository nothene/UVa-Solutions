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
    int n, m; vi a;
    while(cin>>n){
    	a.pb(n);
    	int len = a.size();
    	if(len % 2 == 0){
    		nth_element(a.begin(), a.begin() + (a.size()/2), a.end());
    		int p = a[a.size()/2];
    		nth_element(a.begin(), a.begin() + (a.size()/2-1), a.end());
    		int q = a[(a.size()/2)-1];
    		cout<<(p+q)/2<<endl;
		}else{
			nth_element(a.begin(), a.begin() + a.size()/2, a.end());
			cout<<a[a.size()/2]<<endl;
		}
	}
    return 0;
}
