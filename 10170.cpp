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

ll N, T, M, K, S, D;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> S >> D){
		ll ans = floor(sqrt(2*D+(S*S)));
		ll sum = ll((ans-S+1) * ((S+ans)/2.0));
		while(sum < D){
			ans++;
			sum = ll((ans-S+1) * ((S+ans)/2.0));
		}
		cout << ans << endl;
	}
    return 0;
}
