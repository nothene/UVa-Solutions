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

bool comp(ii a, ii b){
	if(a.ss == b.ss){
		if(a.ff % 2 == 0 && abs(b.ff % 2) == 1){
			return 0;
		} else if(abs(a.ff % 2) == 1 && b.ff % 2 == 0){
			return 1;
		} else if(a.ff % 2 == 0 && b.ff % 2 == 0){
			return a.ff < b.ff;
		} else return a.ff > b.ff;
	}
	return a.ss < b.ss;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> M){
		cout << N << " " << M << endl;
		if(N == 0 && M == 0) break;
		vii V(N);
		forn(i, N){
			cin >> K;
			V[i] = {K, K % M};
		}
		sort(V.begin(), V.end(), comp);
		forn(i, N) cout << V[i].ff << endl;
	}
    return 0;
}
