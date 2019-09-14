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

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) return 0;
		int sum = 0, in, ans = 0; 
		forn(i, N){
			cin >> in;
			sum += in;
			ans = max(ans, sum);
			if(sum < 0){
				sum = 0;
			}
		}
		if(sum > 0) cout << "The maximum winning streak is " << ans << ".\n";
		else cout << "Losing streak.\n";
	}
		
	return 0;
}
