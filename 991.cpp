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

int N, T, M, K;
bool first = 1;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll cat[20] = {0}; cat[0] = 1;
	for(int i = 1; i <= 10; i++){
		cat[i] = (2.0*i * (2.0*i-1)) / ((i+1.0) * i) * cat[i-1];
		cout << cat[i] << endl;
	} 
	while(cin >> N){
		if(!first) cout << endl;
		cout << cat[N] << endl;
		first = 0;
	}
    return 0;
}
