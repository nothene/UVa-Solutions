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

int N, T, M, K, A, B;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> A >> B){
		int ans = 0;
		cout << A << " " << B << " ";
		if(A > B) swap(A, B);
		for(int i = A; i <= B; i++){
			int tmp = 0, n = i;
			while(n != 1){
				if(n % 2) n = 3*n+1;
				else n = n/2;
				tmp++;
			}
			ans = max(tmp, ans);
		}
		cout << ans + 1 << endl;
	}
    return 0;
}
