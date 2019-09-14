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

int N, T, x, y, d, a, b;

void extendedEuclid(int a, int b){
	if(b == 0){
		x = 1; y = 0; d = a; return;
	}
	extendedEuclid(b, a % b);
	int x1 = y;
	int y1 = x - (a / b) * y;
	x = x1;
	y = y1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> a >> b){
		extendedEuclid(a, b);
		cout << x << " " << y << " " << a * x + b * y << endl;
	}
    return 0;
}
