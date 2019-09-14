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

int N, T, a, b, c;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	while(T--){
		cin >> a >> b >> c;
		bool sol = false;
		for(int x = -100; x <= 100 && !sol; x++){
			for(int y = -100; y <= 100 && !sol; y++){
				for(int z = -100; z <= 100 && !sol; z++){
					if(x != y && y != z && x != z && x + y + z == a && x * y * z == b && x * x + y * y + z * z == c){
						cout << x << " " << y << " " << z << endl;
						sol = true;
					}
				}
			}
		}
		if(!sol) cout << "No solution.\n";
	}
    return 0;
}
