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

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		vi V; V.pb(N);
		while(cin >> N){
			if(N == 0) break;
			V.pb(N);
		}
		int cur = gcd(V[0], V[1]);
		cout << V[0] << " " << V[1] << " " << cur << endl;
		for(int i = 2; i < V.size(); i++){
			cur = gcd(cur, V[i]);
			cout << cur << endl;
		}
		cout << cur << endl;
	}
    return 0;
}
