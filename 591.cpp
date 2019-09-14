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

int N, T, M, K, a, b, caseNo = 1;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		vi V(N); int sum = 0;
		forn(i, N) cin >> V[i], sum += V[i];
		sort(V.begin(), V.end());
		sum /= N; int ans = 0;
		forn(i, N){
			if(V[i] < sum){
				ans += sum - V[i];
			}
		}
		cout << "Set #" << caseNo << "\nThe minimum number of moves is " << ans << ".\n\n";
		caseNo++;
	}
    return 0;
}
