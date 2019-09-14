#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 100000000000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define pb push_back
#define ff first
#define ss second

ll N, T, M, K, p, q;

ll pow(int base, int time){
	forn(i, time) base *= base;
	return base;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	for1(_, T){
		cin >> p >> q;
		ll div = pow(2, q), min_ans = INF, max_ans = -INF;
		for(ll i = 0; i < (1 << p); i++){
			ll num = 0, mul = 1;
			bitset<32> bt(i);
			for(int j = 0; j < p; j++){
				if(bt[j]){
					num += (mul);
				} else{
					num += (2*mul);
				}
				mul *= 10;
			}
			if(num % div == 0){
				min_ans = min(min_ans, num);
				max_ans = max(max_ans, num);
			}
		}
		cout << "Case " << _ << ": ";
		if(min_ans == max_ans) cout << min_ans << endl;
		else if(min_ans == INF && max_ans == -INF) cout << "impossible\n";
		else cout << min_ans << " " << max_ans << endl;
	}
    return 0;
}
