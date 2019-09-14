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
	cin >> N;
	for1(i, N){
		cin >> T; int num, max_num = 0;
		forn(j, T) cin >> num, max_num = max(num, max_num);
		cout << "Case " << i << ": " << max_num << endl;
	}
    return 0;
}
