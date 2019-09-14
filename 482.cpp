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

bool comp(pair<int, string> a, pair<int, string> b){
	return a.ff < b.ff;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T; string line;
	getline(cin, line);
	forn(_, T){
		if(_ > 0) cout << endl;
		getline(cin, line);
		getline(cin, line);
		istringstream a(line);
		getline(cin, line);
		istringstream b(line);
		vector< pair<int, string> > V;
		int num; string s;
		while(a >> num){
			b >> s;
			V.pb({num, s});
		}
		sort(V.begin(), V.end(), comp);
		forn(i, V.size()){
			cout << V[i].ss << endl;
		}
	}
    return 0;
}
