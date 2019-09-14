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
    int n, in;
    while(cin>>n){
    	if(n == 0) return 0;
    	in = 1;
		while(in != 0){
			vi B;
			for(int i = 0; i < n; i++){
				cin>>in; if(in == 0){ break; } 
				B.pb(in);
			}
			if(in != 0){
				stack<int> A, S; 
				for(int i = n; i >= 1; i--){
					A.push(i);
				}
				int pos = 0; bool ok = true;
				while(pos < n){
					if(!A.empty() && B[pos] == A.top()){
						pos++; A.pop();
					} else if(!S.empty() && S.top() == B[pos]){
						pos++; S.pop();
					} else if(!A.empty()){
						S.push(A.top()); A.pop();
					} else{
						ok = false; break;
					}
				}
				if(ok) cout<<"Yes\n";
				else cout<<"No\n";	
			}
		} cout<<"\n";
	}
    return 0;
}
