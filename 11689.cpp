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

int N, T, M, K, e, f, c;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	forn(_, T){
		cin >> e >> f >> c;
		int bottle = e + f, ans = 0;
		while(bottle >= c){
			ans += bottle / c;
			bottle = (bottle / c) + (bottle % c);
		}
		cout << ans << endl;
	}
    return 0;
}
