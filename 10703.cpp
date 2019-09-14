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

int N, T, M, K, W, H;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> W >> H >> N){
		if(W == 0 && H == 0 && N == 0) break;
		int board[505][505] = {0};
		int cnt = W*H;
		forn(_, N){
			int a1, b1, a2, b2;
			cin >> a1 >> b1 >> a2 >> b2;
			for(int i = min(a1, a2); i <= max(a1, a2); i++){
				for(int j = min(b1, b2); j <= max(b1, b2); j++){
					if(board[i][j] == 0){
						board[i][j] = 1;
						cnt--;
					}
				}
			}
		}
		if(cnt == 0){
			cout << "There is no empty spots.\n";
		} else if(cnt == 1){
			cout << "There is one empty spot.\n";
		} else{
			cout << "There are " << cnt << " empty spots.\n";
		}
	}
    return 0;
}
