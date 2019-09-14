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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N < 0) break;
		int r = sqrt(2 * N);
		for(int i = r; i > 0; i--){
			int a = ( 2 * N - pow(i, 2) + i ) / ( 2 * i );
			//cout << a << " " << i << " " << (i / 2) * (2 * a + (i - 1)) << endl;
			if(a > 0 && ceil(a) == floor(a) && (i / 2.0) * (2.0 * a + (i - 1)) == N){
				cout << N << " = " << a << " + ... + " << a + i - 1 << endl; break;
			}
		}
		
	}
    return 0;
}
