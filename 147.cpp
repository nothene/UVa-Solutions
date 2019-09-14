#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define BUG(x) cout<<x<<endl;
#define mp make_pair
#define pb push_back

ull N, T;
double n;
ull coins[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5};
ull memo[11][40000];

ull ways(ull id, ull rem){
	if(rem == 0LL) return 1LL;
	if(id == 12LL || rem < 0LL) return 0LL;
	if(memo[id][rem] != -1LL) return memo[id][rem];
	return memo[id][rem] = ways(id + 1LL, rem) + ways(id, rem - coins[id]);
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    memset(memo, -1LL, sizeof memo);
    ways(0, 10000LL);
	while(cin >> n){
		if(n == 0) break;
		ull left = (n * 100);
		printf("%6.2lf%17llu\n", n, ways(0LL, left));
	}
    return 0;
}
