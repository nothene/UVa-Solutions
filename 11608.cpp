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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N <= -1) break;
		ll prob = N;
		cout << "Case " << caseNo << ":\n";
		vi have(12), need(12);
		forn(i, 12){
			cin >> have[i];
		}
		forn(i, 12){
			cin >> need[i];
		}
		forn(i, 12){
			if(prob-(need[i]) < 0) cout << "No problem. :(\n";
			else{
				cout << "No problem! :D\n"; prob -= need[i];
			}
			prob += have[i];
		}
		caseNo++;
	}
    return 0;
}
