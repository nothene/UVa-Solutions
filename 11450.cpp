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

int N, T, M, C;
int price[25][25];
int memo[210][25];

int shop(int money, int g){
	if(money < 0) return -50000;
	if(g == C) return M - money;
	if(memo[money][g] != -1) return memo[money][g];
	int ans = -1;
	for(int model = 1; model <= price[g][0]; model++){
		ans = max(ans, shop(money - price[g][model], g + 1));
	}
	return memo[money][g] = ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> N;
	forn(i, N){
		cin >> M >> C;
		forn(j, C){
			cin >> price[j][0];
			for1(k, price[j][0]) cin >> price[j][k];
		}
		memset(memo, -1, sizeof memo);
		int score = shop(M, 0);
		if(score < 0) cout << "no solution\n";
		else cout << score << endl;
	}
    return 0;
}
