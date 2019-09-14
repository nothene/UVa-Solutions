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
		if(N == 0) break;
		int row = 0, col = 0;
		int up = ceil(sqrt(float(N)));
		int down = sqrt(float(N));
		if(up != down){
			if(abs(up * up - N) < up){
				if(up % 2) row = up;
				else col = up;
			} else{
				if(up % 2) col = up;
				else row = up;		
			}
			
			if(abs((up * up) - N) < up){
				if(row) col = abs(N - up * up) + 1;
				else row = abs(N - up * up) + 1;
			} else{
				if(row) col = abs(N - down * down);
				else row = abs(N - down * down);				
			}
			
		} else{
			if(up % 2){
				col = 1; row = up;
			} else{
				col = up; row = 1;
			}
		}
		cout << col << " " << row << endl;
	}
    return 0;
}
