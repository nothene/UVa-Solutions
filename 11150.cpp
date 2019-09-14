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
	while(cin >> T){
		N = T;
		int ans = N, begin;
		begin = ceil(N/3.0)*3;
		while(1){
			while(N >= 3){
				//cout << N << " " << N/3 << " " << N%3 << endl;
				ans += N / 3;
				N = N % 3 + (N / 3);
			}
			if(abs(begin-T) <= N){
				cout << ans << endl;
				break;
			} 
			else begin--;
		}
	}
    return 0;
}
