#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define pb push_back
#define ff first
#define ss second

int N, T, M, K, caseNo = 1;
string s, t;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T; cin.ignore(); getline(cin, s);
	while(T--){
		if(caseNo > 1) cout << endl;
		vector<string> vs; map<string, int> memo; int hi = 0; string ans;	
		while(getline(cin, s)){
			if(s == "") break;
			vs.pb(s);
		}
		forn(i, vs.size()){
			forn(j, vs.size()){
				memo[vs[i]+vs[j]]++;
				memo[vs[j]+vs[i]]++;
			}
		}
		for(map<string, int>::iterator it = memo.begin(); it != memo.end(); it++){
			if(it->ss > hi){
				hi = it->ss;
				ans = it->ff;
			}
		}
		cout << ans << endl;
		caseNo++;
	}
	
    return 0;
}
