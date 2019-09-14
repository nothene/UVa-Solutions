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
	while(cin >> N){
		if(N == 0) break;
		string s; vi V(N);
		int min_B = INF;
		cin.ignore();
		forn(i, N){
			getline(cin, s); int B = s.size();
			forn(j, s.size()){
				if(s[j] == 'X'){
					B--;
				}
			}
			min_B = min(min_B, B); V[i] = B;
		}
		int ans = 0;
		forn(i, N){
			ans += abs(V[i]-min_B);
		}
		cout << ans << endl;
	}
    return 0;
}
