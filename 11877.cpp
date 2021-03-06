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
	while(cin >> N){
		if(N == 0) break;
		int ans = 0, start = N + 3;
		while(start >= N){
			int coca = 0, bottle = start;
			while(bottle > 3){
				coca += bottle / 3;
				bottle = (bottle / 3) + (bottle % 3);
			}
			//cout << "start: " << start << "coca: " << coca << " bottle: " << bottle << endl;
			if(bottle >= abs(N-start)) ans = max(ans, coca);
			start--;
		}
		cout << ans << endl;
	}
    return 0;
}
