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
#define MAX 11

int N, T;
int dist[MAX][MAX], memo[MAX][1<<(MAX-1)];

int tsp(int c, int mask){
	if(mask == (1<<N)-1) return dist[c][0];
	if(memo[c][mask] != -1) return memo[c][mask];
	int ans = 2000000000;
	for(int nxt = 1; nxt <= N; nxt++){
		if(!(mask & (1<<(nxt-1)))) ans = min(ans, dist[c][nxt] + tsp(nxt, mask | (1<<(nxt-1))));
	}
	return memo[c][mask] = ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	while(T--){
		int xsize, ysize; cin >> xsize >> ysize;
		int x[11], y[11];
		cin >> x[0] >> y[0];
		cin >> N;
		for(int i = 1; i <= N; i++){
			cin >> x[i] >> y[i];
		}
		for(int i = 0; i <= N; i++){
			for(int j = 0; j <= N; j++){
				dist[i][j] = abs(x[i] - x[j]) + abs(y[i] - y[j]);
			}
		}
		memset(memo, -1, sizeof memo);
		cout << "The shortest path has length " << tsp(0, 0) << endl;
	}
    return 0;
}
