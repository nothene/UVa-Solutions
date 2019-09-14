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

int N, T, M, K, a, b, c;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> a >> b){
		vi V;
		while(a && b){
			c = a / b;
			V.pb(c);
			c = a % b;
			a = b; b = c;
		}
		cout << "[" << V[0];
		if(V.size() > 1) cout << ";" << V[1];
		for(int i = 2; i < V.size(); i++){
			cout << "," << V[i];
		} cout << "]\n";
	}
    return 0;
}
