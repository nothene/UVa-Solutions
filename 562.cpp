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
int coins[105];
int memo[500][50000];
int divide, best;

int recur(int id, int money){
	if(money == 0 || id == N) return 0;
	if(memo[id][money] != -1) return memo[id][money];
	if(coins[id] > money) return memo[id][money] = recur(id+1, money);
	return memo[id][money] = max(recur(id+1, money), coins[id]+recur(id+1, money-coins[id]));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	forn(_, T){
		cin >> N; int sum = 0;
		forn(i, N){
			cin >> coins[i], sum += coins[i];
		}
		divide = sum/2;
		memset(memo, -1, sizeof memo);
		best = recur(0, divide);
		cout << abs((sum-best)-best) << endl;
	}

    return 0;
}
