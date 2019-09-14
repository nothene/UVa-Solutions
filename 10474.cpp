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

int N, T;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int CaseNo = 1, in;
	while(cin >> N >> T){
		if(N == 0 && T == 0) break;
		vi V; map<int, int> key;
		for1(i, N){
			cin >> in; 
			V.pb(in);
		} 
		sort(V.begin(), V.end());
		cout << "CASE# " << CaseNo << ":\n";
		forn(j, T){
			cin >> in;
			vector<int>::iterator low = lower_bound(V.begin(), V.end(), in);
			if(binary_search(V.begin(), V.end(), in)) cout << in << " found at " << low - V.begin() + 1 << endl;
			else cout << in <<" not found\n";
		}
		CaseNo++;
	}
    return 0;
}
