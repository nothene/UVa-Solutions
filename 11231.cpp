#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define pb push_back
#define ff first
#define ss second

int N, T, M, K;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> M >> K){
		if(N == 0 && M == 0 && K == 0) break;
		int r = (N-7) > 0 ? (N-7) : 0;
		int c = (M-7) > 0 ? (M-7) : 0;
		if(K == 1){
			int ans = ceil((r * c) / 2.0);
			cout << ans << endl;
		} else{
			int ans = (r * c) / 2;
			cout << ans << endl;
		}
	}
    return 0;
}
