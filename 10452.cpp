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

int N, T, M, K, row, col;
char grid[10][10];

void recur(int i, int j, stack<char> s, vector<string> prev){
	if(prev.empty()){
		prev.pb("forth");
		recur(i-1, j, s, prev);
		prev.pop_back();
		if(j > 0){
			prev.pb("left");
			recur(i, j-1, s, prev);	
			prev.pop_back();
		}
		if(j < col){
			prev.pb("right");
			recur(i, j+1, s, prev);
			prev.pop_back();	
		}
		return;
	}
	if(s.empty() && grid[i][j] == '#'){
		forn(i, prev.size()){
			if(i > 0) cout << " ";
			cout << prev[i];
		} cout << endl; return;
	}
	if(!s.empty() && grid[i][j] == s.top()){
		s.pop();
		if(i > 0){
			prev.pb("forth");
			recur(i-1, j, s, prev);
			prev.pop_back();	
		}
		if(j > 0){
			prev.pb("left");
			recur(i, j-1, s, prev);	
			prev.pop_back();
		}
		if(j < col){
			prev.pb("right");
			recur(i, j+1, s, prev);
			prev.pop_back();	
		}
		return;	
	}
	return;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	int a, b;
	forn(_, T){
		cin >> row >> col;
		forn(i, row){
			forn(j, col){
				cin >> grid[i][j];
				if(grid[i][j] == '@') a = i, b = j;
			}
		}
		stack<char> s; vector<string> V;
		s.push('A'); s.push('V'); s.push('O'); s.push('H'); s.push('E'); s.push('I');
		recur(a, b, s, V);
	}
    return 0;
}
