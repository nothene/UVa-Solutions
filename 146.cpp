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
    string s, t;
    while(cin>>s){
    	if(s[0] == '#') return 0;
    	t = s;
    	sort(t.rbegin(), t.rend());
    	if(s.compare(t) == 0) cout<<"No Successor\n";
    	else{
    		next_permutation(s.begin(), s.end());
    		cout<<s<<endl;
		}
	}
}
