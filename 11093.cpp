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
	cin >> T;
	for1(_, T){
		cin >> N;
		vi need(N), have(N); ll needs = 0, haves = 0;
		forn(i, N){
			cin >> have[i], haves += have[i];
		}
		forn(i, N){
			cin >> need[i], needs += need[i];
		}
		if(needs > haves){
			cout << "Case " << _ << ": Not possible\n"; continue;
		}
		int ans = -1;
		forn(i, N){
			ll cur = 0, pos = i, len = 0;
			while(1){
				if(len == N){
					ans = i; break;	
				} 
				cur += have[pos];
				cur -= need[pos];
				if(cur < 0) break;
				pos++; len++;
				if(pos == N) pos = 0;
			}
			if(ans > -1){
				break;
			}
		}
		if(ans > -1){
			cout << "Case " << _ << ": " << "Possible from station " << ans+1 << endl;
		} else cout << "Case " << _ << ": Not possible\n";
	}
    return 0;
}
