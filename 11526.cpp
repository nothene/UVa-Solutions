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
	cin >> T;
	forn(_, T){
		cin >> N;
		ll sum = 0, u = sqrt(N);
		for(ll k = 1; k <= u; k++){
			sum += N / k;
		}
		sum = (2 * sum) - u * u ;
		cout << sum << endl;
	}
    return 0;
}

