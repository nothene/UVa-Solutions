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
	while(cin >> N >> M){
		if(N == 0 && M == 0) break;
		cout << N << " " << M << " ";
		if(N == 1 && M == 1) cout << "Multiple\n";
		else if(N == 1) cout << "Impossible\n";
		else if((M-1) % (N-1) == 0){
			int cats = 1 + N * ((M-1) / (N-1));
			cout << cats << endl;
		} else cout << "Impossible\n";
	}
    return 0;
}
