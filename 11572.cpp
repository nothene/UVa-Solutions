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

int N, T, in;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	while(T--){
		cin >> N;
		map<int, int> key; int start = 0, ans = 0;
		for1(i, N){
			cin >> in;
			if(key[in]){
				if(key[in] > start){
					start = key[in], key[in] = i;	
				}
			} key[in] = i;
			ans = max(ans, i - start);
		}
		cout << ans << endl;
	}
    return 0;
}
