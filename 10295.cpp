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
string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> N >> M; map<string, int> memo;
	forn(_, N){
		cin >> s >> K;
		memo[s] = K;
	}
	forn(_, M){
		ll ans = 0;
		while(cin >> s){
			if(s == ".") break;
			ans += memo[s];
		}
		cout << ans << endl;
	}
    return 0;
}
