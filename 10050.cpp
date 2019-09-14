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

int N, T, M, K;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	forn(_, T){
		cin >> N >> M;
		bool strike[5000] = {false};
		forn(_, M){
			int days;
			cin >> days;
			for(int j = days; j <= N; j += days){
				strike[j] = true;
			}
		}
		int ans = 0;
		for(int i = 1; i <= N; i++){
			if(i % 7 == 6 || i % 7 == 0) continue;
			if(strike[i]) ans++;
		}
		cout << ans << endl;
	}
    return 0;
}
