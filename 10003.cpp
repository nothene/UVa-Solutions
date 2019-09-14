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

int N, T, L, C;
int cost[55], memo[55][55];

int cut(int left, int right){
	if(left + 1 == right) return 0;
	if(memo[left][right] != -1) return memo[left][right];
	
	int ans = 200000;
	
	for(int i = left + 1; i < right; i++){
		ans = min(ans, cut(left, i) + cut(i, right) + (cost[right] - cost[left]));
	}
	
	return memo[left][right] = ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> L){
		if(L == 0) break;
		cin >> N;
		cost[0] = 0;
		for1(i, N) cin >> cost[i];
		cost[N+1] = L;
		memset(memo, -1 , sizeof memo);
		cout << "The minimum cutting is " << cut(0, N + 1) << ".\n";
	}
    return 0;
}
