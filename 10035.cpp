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

int N, T, M, K, a, b;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> a >> b){
		if(a == 0 && b == 0) break;
		int ans = 0, carry = 0;
		while(a || b){
			carry = carry+(a%10)+(b%10);
			carry /= 10; a /= 10; b /= 10;
			if(carry) ans++;
		}
		if(ans == 0) cout << "No carry operation.\n";
		else if(ans == 1) cout << "1 carry operation.\n";
		else cout << ans << " carry operations.\n";
	}
    return 0;
}
