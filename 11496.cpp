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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		vi V(N);
		if(N == 2){
			forn(i, N) cin >> V[i];
			cout << 2 << endl; continue;
		} 
		int ans = 0;
		forn(i, N) cin >> V[i];
		for(int i = 1; i < N-1; i++){
			if((V[i-1] < V[i] && V[i] > V[i+1]) || (V[i-1] > V[i] && V[i] < V[i+1])){
				ans++;
			}
		}
		if((V[N-1] < V[0] && V[0] > V[1]) || (V[N-1] > V[0] && V[0] < V[1])) ans++;
		if((V[N-2] < V[N-1] && V[N-1] > V[0]) || (V[N-2] > V[N-1] && V[N-1] < V[0])) ans++;
		cout << ans << endl;
	}
    return 0;
}
