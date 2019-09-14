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

int N, T, Q, sum, caseNo = 1;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		vi V(N);
		forn(i, N) cin >> V[i];
		sort(V.begin(), V.end());
		cin >> T;
		cout << "Case " << caseNo << ":\n";
		forn(i, T){
			cin >> Q; int best = 2 * INF;
			for(int j = 0; j < N - 1; j++){
				for(int k = j + 1; k < N; k++){
					if(abs((V[j] + V[k]) - Q) < best){
						best = abs((V[j] + V[k]) - Q);
						sum = V[j] + V[k];
					}
				}
				if(sum == Q) break;
			}
			cout << "Closest sum to " << Q << " is " << sum << ".\n";
		}
		caseNo++;
	}
    return 0;
}
