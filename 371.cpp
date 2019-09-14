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

int N, T;
unsigned int a, b;
unordered_map<unsigned int, unsigned int> memo;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> a >> b){
		if(a > b) swap(a, b);
		if(a == 0 && b == 0) return 0;
		unsigned int ans, count = 0, n, tcount;
		for(ll i = a; i <= b; i++){
			n = i, tcount = 0;
			if(memo[i]) tcount = memo[i];
			else{
				do {
					if(n % 2) n = 3 * n + 1;
					else n /= 2;
					tcount++;
				} while(n != 1);
				memo[i] = tcount;
				//cout << i << ": " << memo[i] << endl;
			}
			if(tcount > count) count = tcount, ans = i;
		}
		cout << "Between " << a << " and " << b << ", " << ans << " generates the longest sequence of " << count << " values.\n";
	}
    return 0;
}
