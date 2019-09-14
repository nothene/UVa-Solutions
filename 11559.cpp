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

int N, T, M, K, B, H, W, p, a;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> B >> H >> W){
		int min_cost = INF;
		forn(i, H){
			cin >> p;
			forn(j, W){
				cin >> a;
				if(a >= N) min_cost = min(min_cost, p*N);
			}
		}
		if(min_cost > B) cout << "stay home\n";
		else cout << min_cost << endl;
	}
    return 0;
}
