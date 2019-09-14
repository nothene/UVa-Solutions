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
int coins[] = {50, 25, 10, 5, 1};
int memo[6][7500];

int ways(int id, int rem){
	if(rem == 0) return 1;
	if(id == 5 || rem < 0) return 0;
	if(memo[id][rem] != -1) return memo[id][rem];
	return memo[id][rem] = ways(id + 1, rem) + ways(id, rem - coins[id]);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	memset(memo, -1, sizeof(memo));
	while(cin >> N){
		cout << ways(0, N) << endl;
	}
    return 0;
}
