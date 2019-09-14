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

ll N, T, K, n, memo[105][105];

int ways(int n, int k){
	if(k == 1) return 1;
	else if(memo[n][k] != -1) return memo[n][k];
	int ans = 0;
	for(int i = 0; i <= n; i++){
		ans = (ans + ways(n - i, k - 1)) % 1000000;
	}
	return memo[n][k] = ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    memset(memo, -1, sizeof memo);
	while(cin >> N >> K){
		if(N == 0 && K == 0) break;
		cout << ways(N, K) % 1000000 << endl;
	}
    return 0;
}
