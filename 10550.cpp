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

int N, T, M, K, a, b, c, d;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> a >> b >> c >> d){
		if(a == 0 && b == 0 && c == 0 && d == 0) break;
		int ans = 1080;
		ans += ((a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40) * 9;
		cout << ans << endl;
	}
    return 0;
}
