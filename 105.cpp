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

int N, T, M, K, L, H, R, min_L = INF, max_R = 0;
int h[100000] = {0};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> L >> H >> R){
		if(L == 0) break;
		for(int i = L; i < R; i++){
			h[i] = max(h[i], H);
		}
		min_L = min(L, min_L);
		max_R = max(R, max_R);
	}
	int prev = -1;
	//cout << min_L << " " << h[0] << " ";
	for(int i = min_L; i <= max_R; i++){
		if(h[i] != prev){
			if(i > min_L) cout << " ";
			cout << i << " " << h[i];
			prev = h[i];
		}
	} cout << endl;
	//cout << max_R << " 0\n";
    return 0;
}
