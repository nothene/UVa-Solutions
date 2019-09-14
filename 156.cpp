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
#define ff first
#define ss second

int N, T, M, K;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s; vector<string> vs; set<string> sets, ban;
	while(cin >> s){
		if(s[0] == '#') break;
		vs.pb(s);
		forn(i, s.size()) s[i] = tolower(s[i]);
		sort(s.begin(), s.end());
		if(!sets.count(s) && !ban.count(s)){
			sets.insert(s);
		} else{
			sets.erase(s);
			ban.insert(s);
		}
	}
	sort(vs.begin(), vs.end());
	forn(i, vs.size()){
		string t = vs[i];
		forn(i, t.size()) t[i] = tolower(t[i]);
		sort(t.begin(), t.end());
		if(sets.count(t)){
			cout << vs[i] << endl;
		}
	}
    return 0;
}
