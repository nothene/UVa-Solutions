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
int memo[1005][35], price[1005], weight[1005];

int value(int id, int w){
	if(w == 0 || id == N) return 0;
	if(w < weight[id]) return memo[id][w] = value(id+1, w);
	if(memo[id][w] != -1) return memo[id][w];
	return memo[id][w] = max(value(id+1, w), price[id] + value(id+1, w - weight[id]));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	forn(i, T){
		memset(memo, -1, sizeof(memo));
		cin >> N;
		int ans = 0, MW;
		forn(i, N) cin >> price[i] >> weight[i];
		int G;
		cin >> G;
		forn(i, G){
			cin >> MW;
			ans += value(0, MW);
		}
		cout << ans << endl;
	}
    return 0;
}
