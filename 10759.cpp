#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define pb push_back
#define ff first
#define ss second

ull N, T, M, K;
ull memo[30][4000];

ull gcd(ull a, ull b) { return b == 0 ? a : gcd(b, a % b); }

ull recur(ull dice_left, ull score){
	if(dice_left == 0){
		if(score >= M){
			return 1;
		}
		else return 0;
	}
	ull ans = 0;
	if(memo[dice_left][score] != -1) return memo[dice_left][score];
	for(int i = 1; i <= 6; i++){
		ans += recur(dice_left-1, score+i);
	}
	return memo[dice_left][score] = ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    while(cin >> N >> M){
    	if(N == 0 && M == 0) break;
    	memset(memo, -1, sizeof memo);
    	ull up = recur(N, 0);
    	ull down = 1;
    	forn(_, N) down *= 6;
    	ll ans = (up/gcd(up, down)) / (down/gcd(up, down));
    	if(ans == 1) printf("1\n");
    	else if((up/gcd(up, down)) == 0) printf("0\n");
    	else printf("%llu/%llu\n", up/gcd(up, down), down/gcd(up, down));
	}
    return 0;
}
