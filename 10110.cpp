#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define pb push_back
#define ff first
#define ss second

ll N, T, M, K;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 	while(cin >> N){
 		if(N == 0) break;
		if(floor(sqrt(N)) == ceil(sqrt(N))){
			cout << "yes\n";
		} else cout << "no\n";
	}
    return 0;
}
