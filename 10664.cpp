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
vi coins;
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
	cin.ignore();
	forn(_, T){
		int sum = 0; string line;
		getline(cin, line);
		stringstream ss(line);
		coins.clear();
		while(ss.good()){
			int num;
			ss >> num;
			coins.pb(num);
		}
		N = coins.size();
		forn(i, N){
			sum += coins[i];
		}
		if(sum % 2 == 1) cout << "NO\n";
		else{
			divide = sum/2;
			memset(memo, -1, sizeof memo);
			best = recur(0, divide);
			if(best == divide){
				cout << "YES\n";
			} else cout << "NO\n";
		}
	}

    return 0;
}
