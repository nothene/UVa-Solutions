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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	map<int, int> rend; vi V;
	while(cin >> N){
		if(!rend[N]) V.pb(N);
		rend[N]++;
	}
	for(vector<int>::iterator it = V.begin(); it != V.end(); it++){
		cout << *it << " " << rend[*it] << endl;
	}
    return 0;
}
