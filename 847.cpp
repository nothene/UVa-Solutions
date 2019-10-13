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
		bool stan = true;
		ll P = 1;
		while(P < N){
			if(stan){
				stan = 0;
				P *= 9;
			} else{
				stan = 1;
				P *= 2;
			}
		}
		if(!stan) cout << "Stan wins.\n";
		else cout << "Ollie wins.\n";
	}
    return 0;
}
