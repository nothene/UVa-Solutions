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

int N, T, M, K, P;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	for1(i, T){
		cin >> N >> K >> P;
		P = P % N;
		K += P;
		if(K > N) K = K % N;
		cout << "Case " << i << ": " << K << endl;
	}
    return 0;
}
