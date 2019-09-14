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

int N, T, R;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int caseNo = 1;
    while(cin >> R >> N){
    	if(N == 0 && R == 0) break;
    	if(R > (N * 26 + N)) cout << "Case "  << caseNo << ": impossible\n";
    	else if(R <= N) cout << "Case " << caseNo << ": 0\n";
    	else{
    		int ans = ceil((R - N) / (float)N);
			cout << "Case " << caseNo << ": " << ans << endl; 
		}
		caseNo++;
	}
    return 0;  
}                        
