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

int N, T, M, ans, t_time;
int memo[30000];

int value(int burger, int time){
	if(time > T) return 0;
	if(memo[time] != -1){ return memo[time]; }
	t_time = max(time, t_time);
	value(burger+1, time+N); value(burger+1, time+M);
	return memo[time] = burger;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> M >> N >> T){
		memset(memo, -1, sizeof memo); t_time = 0;
		value(0, 0);
		cout << memo[t_time];
		if(t_time != T) cout << " " << abs(T-t_time);
		cout << endl;
		//for(int i = 0; i < 1002; i++){ if(memo[i]) cout << memo[i] << " "; } cout << endl;
	}
    return 0;
}
