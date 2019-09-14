#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 100000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define BUG(x) cout<<x<<endl;
#define mp make_pair
#define pb push_back

int N, T, M, Q, D, caseNo = 1;
int memo[105][10005];
int cost[105], fave[105];

int recur(int id, int sum){
	if((M <= 1800 && sum > M) || (sum > M+200)) return -INF; // return large negative value for impossible cases
	// the above case (1) is impossible -> starting money + bonus can never reach > 2000
	// the above case (2) is impossible -> total sum is bigger than starting money + bonus
	if(id == N) return 0;
	if(memo[id][sum] != -1) return memo[id][sum];
	return memo[id][sum] = max(fave[id]+recur(id+1, sum+cost[id]), recur(id+1, sum));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> M >> N){
		memset(memo, -1, sizeof memo);
		forn(i, N){
			cin >> cost[i] >> fave[i];
		}
		cout << recur(0, 0) << endl;
	}
    return 0;
}
