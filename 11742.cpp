#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector< pair<ii, int> > viii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define BUG(x) cout<<x<<endl;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second

int N, T, M, K, a, b, c;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> M){
		if(N == 0 && M == 0) break;
		int p[] = {0, 1, 2, 3, 4, 5, 6, 7};
		viii V(M);
		forn(i, M){
			cin >> a >> b >> c;
			V[i] = {{a, b}, c};
		}
		int cnt = 0;
		do{
			if(M > 0){
				bool ok = true;
				forn(i, M){
					a = V[i].ff.ff; b = V[i].ff.ss; c = V[i].ss;
					int pos_a, pos_b;
					for(int j = 0; j < 8; j++){
						if(p[j] == a) pos_a = j;
						if(p[j] == b) pos_b = j;
					}
					if(c < 0){
						if(abs(pos_a-pos_b) < abs(c)){
							ok = false;
						}
					} else if(c > 0){
						if(abs(pos_a-pos_b) > abs(c)){
							ok = false;
						}
					}
				}
				if(ok) cnt++;
			} else cnt++;
		} while(next_permutation(p, p+N));
		cout << cnt << endl;
	}
    return 0;
}
