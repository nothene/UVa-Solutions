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

int N, T, X, d, k;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> N;
	while(N--){
		cin >> X;
		vi V(X+1); ll term = 1, curterm = 0, ans = 0;
		for(int i = 0; i <= X; i++){
			cin >> V[i];
		}
		cin >> d >> k;
		while(curterm < k){
			curterm += d * term;
			term++;
		}
		term--;
		for(int i = 0; i <= X; i++){
			ans += V[i] * pow(term, i);
		}
		cout << ans << endl;
	}
    return 0;
}
