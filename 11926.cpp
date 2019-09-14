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

int N, T, M, K, L, R, jump;
bitset<1000005> bt;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> M){
		if(N == 0 && M == 0) break;
		bool ok = true; bt.reset();
		forn(_, N){
			cin >> L >> R;
			for(int i = L; i < R; i++){
				if(bt[i] == 1){
					ok = false; break;
				}
				bt[i] = 1;
			}
		}
		forn(_, M){
			cin >> L >> R >> jump;
			while(L < 1000000){
				for(int i = L; i < R && i <= 1000000; i++){
					if(bt[i] == 1){
						ok = false; break;
					}
					bt[i] = 1;				
				}
				L += jump; R = min(R+jump, 1000000);
			}
		}
		if(ok) cout << "NO CONFLICT\n";
		else cout << "CONFLICT\n";
	}
    return 0;
}
