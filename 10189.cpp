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

int N, T, M, K, caseNo = 1;

bool check(int a, int b, vector<string> grid){
	if(a >= 0 && a < N && b >= 0 && b < M){
		if(grid[a][b] == '*') return true;
	}
	return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> M){
		if(N == 0 && M == 0) break;
		if(caseNo > 1) cout << "\n";
		cout << "Field #" << caseNo << ":\n";
		vector<string> grid(N);
		forn(i, N) cin >> grid[i];
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				if(grid[i][j] == '.'){
					int cnt = 0;
					int a = i-1, b = j-1;
					if(check(a, b, grid)) cnt++;
					a = i-1, b = j;
					if(check(a, b, grid)) cnt++;
					a = i-1, b = j+1;
					if(check(a, b, grid)) cnt++;
					a = i, b = j-1;
					if(check(a, b, grid)) cnt++;
					a = i, b = j+1;
					if(check(a, b, grid)) cnt++;
					a = i+1, b = j-1;
					if(check(a, b, grid)) cnt++;
					a = i+1, b = j;
					if(check(a, b, grid)) cnt++;
					a = i+1, b = j+1;
					if(check(a, b, grid)) cnt++;																														
					grid[i][j] = cnt+'0';
				}
			}
		}
		forn(i, N) cout << grid[i] << endl;
		caseNo++;
	}
    return 0;
}
