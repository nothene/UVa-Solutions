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

int quirky[4][20] = {
	{0, 1, 81},
	{0, 1, 2025, 3025, 9801},
	{0, 1, 88209, 494209, 998001},
	{0,
		1,
		4941729,
		7441984,
		24502500,
		25502500,
		52881984,
		60481729,
		99980001}
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n = 100, split = 10;
    /*for(int i = 0; i < 4; i++){
    	for(int j = 0; j < n; j++){
    		int right = j % split;
    		int left = j / split;
    		if((right+left)*(right+left) == j){
    			V[i].pb(j);
    			cout << j << endl;
			}
		}
		n *= 100;
		split *= 10;
	}*/
	while(cin >> N){
		int idx = N/2-1;
		if(idx == 0){
			forn(i, 3){
				cout << setw(N) << setfill('0') << quirky[idx][i] << endl;
			}
		} else if(idx == 1){
			forn(i, 5){
				cout << setw(N) << setfill('0') << quirky[idx][i] << endl;
			}			
		} else if(idx == 2){
			forn(i, 5){
				cout << setw(N) << setfill('0') << quirky[idx][i] << endl;
			}
		} else if(idx == 3){
			forn(i, 9){
				cout << setw(N) << setfill('0') << quirky[idx][i] << endl;
			}			
		}
	}
    return 0;
}        
