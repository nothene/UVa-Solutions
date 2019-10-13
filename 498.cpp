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
	while(getline(cin, s)){
		vi poly, x;
		istringstream iss(s);
		while(iss.good()){
			int num;
			iss >> num;
			poly.pb(num);
		}
		getline(cin, s);
		istringstream iss2(s);
		while(iss2.good()){
			int num;
			iss2 >> num;
			x.pb(num);
		}
		for(int i = 0; i < x.size(); i++){
			if(i > 0) cout << " ";
			int ans = 0;
			for(int j = 0; j < poly.size(); j++){
				ans += (poly[j] * pow(x[i], poly.size()-j-1));
			}
			cout << ans;
		} cout << endl;
	}
    return 0;
}
