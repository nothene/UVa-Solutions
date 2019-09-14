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

int N, T, M, K, n;
char big[10000][10000], small[10000][10000], tmp[10000][10000];
vi V;

void find(){
	int ans = 0;
	for(int i = 0; i < N-n+1; i++){
		for(int j = 0; j < N-n+1; j++){
			int cnt = 0;
			for(int k = 0; k < n; k++){
				for(int l = 0; l < n; l++){
					if(big[i+k][j+l] == small[k][l]) cnt++;
				}
			}
			if(cnt == n*n) ans++;
		}
	}
	V.pb(ans);
}

void rotate(){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			int k = N - j - 1;
			tmp[i][j] = big[k][i];
		}
	}
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			big[i][j] = tmp[i][j];
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> n){
		V.clear();
		if(N == 0 && n == 0) break;
		forn(i, N) cin >> big[i];
		forn(i, n) cin >> small[i];
		forn(i, 4){ find(); rotate(); }
		forn(i, 4){
			if(i == 3)  cout << V[1] << endl;
			else{
				if(i == 1) cout << V[3] << " ";
				else cout << V[i] << " ";
			} 
		}
	}
    return 0;
}
