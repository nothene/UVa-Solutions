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

int N, T, M, K;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	for1(_, T){
		vector< pair<string, int> > vs(10); int num, maxn = 0; string s;
		forn(i, 10){
			cin >> s >> num;
			maxn = max(maxn, num);
			vs[i] = {s, num};
		}
		cout << "Case #" << _ << ":\n";
		forn(i, 10){
			if(vs[i].ss == maxn) cout << vs[i].ff << endl;
		}
	}
    return 0;
}
