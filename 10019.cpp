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
bitset<32> bt;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	int N;
	cin >> N;
	forn(i, N){
		cin >> T;
		bt = bitset<32>(T);
		cout << bt.count() << " ";
		int ans = 0;
		while(T > 0){
			bt = bitset<32>(T % 10);
			ans += bt.count();
			T /= 10;
		}
		cout << ans << endl;
	}
    return 0;
}
