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

int recur(int N){
	if(N >= 101) return N - 10;
	else recur(recur(N+11));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		int cnt = 0;
		cout << "f91(" << N << ") = ";
		//cout << recur(N) << endl;
		if(N <= 100) cout << 91 << endl;
		else cout << N - 10 << endl;
	}
	
    return 0;
}
