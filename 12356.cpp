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

int N, T, M, K, B, S;
int lef[1000005] = {0};
int righ[1000005] = {0};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> S >> B){
		if(B == 0 && S == 0) break;
		for(int i = 1; i <= S; i++){
			lef[i] = i-1;
			righ[i] = i+1;
		}
		lef[1] = -1; righ[S] = -1;
		forn(_, B){
			int L, R;
			cin >> L >> R;
			lef[righ[R]] = lef[L];
			if(lef[L] == -1) cout << "*"; else cout << lef[L];
			cout << " ";
			righ[lef[L]] = righ[R];
			if(righ[R] == -1) cout << "*"; else cout << righ[R];
			//cout << endl; forn(i, 11) cout << lef[i] << " "; cout << endl;
			//cout << endl; forn(i, 11) cout << righ[i] << " "; cout << endl;
			if(_ < B-1) cout << endl;
		}
		cout << "\n-\n";	
	}
    return 0;
} 
