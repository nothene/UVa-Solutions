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
string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	for1(_, T){
		cin >> N >> K >> s;
		int ans = 0;
		for(int i = 1; i < N; i++){
			for(int j = max(0, i-K); j < i; j++){
				if(s[j] == s[i]){
					ans++; break;
				} 
			}
		}
		cout << "Case " << _ << ": " << ans << endl;
	}
    return 0;
}
