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
#define ff first
#define ss second

int N, T, M, K;

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b){
	return a * (b / gcd(a, b));
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		vi V(N); int up = 0, down = 0;
		forn(i, N) cin >> V[i];
		for(int i = 0; i < N; i++){
			for(int j = i+1; j < N; j++){
				if(gcd(V[i], V[j]) == 1){
					up++;
				}
				down++;
			}
		}
		if(up == 0) printf("No estimate for this data set.\n");
		else printf("%.6lf\n", sqrt(6.0 * down / up));
	}
    return 0;
}
