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
	cin >> T; cin.ignore();
	forn(i, T){
		string s; vi V;
		getline(cin, s);
		istringstream iss(s);
		while(iss.good()){
			int num;
			iss >> num;
			V.pb(num);
		}
		int cur = 0;
		for(int i = 0; i < V.size(); i++){
			for(int j = 0; j < V.size(); j++){
				if(i != j && V[i] != V[j]){
					cur = max(cur, gcd(V[i], V[j]));
				}
			}
		}
		cout << cur << endl;
	}
    return 0;
}
