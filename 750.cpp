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

int N, T;
int row[8], a, b, line;

bool place(int r, int c){
	for(int prev = 0; prev < c; prev++){
		if(row[prev] == r || (abs(row[prev] - r) == abs(prev-c))) return false;
	}
	return true;
}

void backtrack(int c){
	if(c == 8 && row[b] == a){
		printf("%2d      %d", ++line, row[0] + 1);
		for(int j = 1; j < 8; j++) printf(" %d", row[j] + 1);
		printf("\n"); 
	}
		for(int r = 0; r < 8; r++)
			if(place(r, c)){
				row[c] = r; backtrack(c + 1);
			}
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	while(T--){
		cin >> a >> b; a--; b--;
		memset(row, 0, sizeof row); line = 0;
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		backtrack(0);
		if(T) printf("\n");;
	}
    return 0;
}
