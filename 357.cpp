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

ll N, T;
ll coins[] = {50, 25, 10, 5, 1};
ll memo[6][40000];

ll ways(ll id, ll rem){
	if(rem == 0LL) return 1LL;
	if(id == 5LL || rem < 0LL) return 0;
	if(memo[id][rem] != -1LL) return memo[id][rem];
	return memo[id][rem] = ways(id + 1LL, rem) + ways(id, rem - coins[id]);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    memset(memo, -1LL, sizeof memo);
    ways(0, 30000LL);
	while(cin >> N){
		ll n = ways(0LL, N);
		if(n > 1LL){
			cout << "There are " << n << " ways to produce " << N << " cents change.\n";
		} else cout << "There is only " << n << " way to produce " << N << " cents change.\n";
	}
    return 0;
}
