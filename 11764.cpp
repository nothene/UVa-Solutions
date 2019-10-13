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

int N, T, M, K, caseNo = 1;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> T;
	forn(_, T){
		cin >> N;
		int hi = 0, lo = 0, prev = -1;
		cin >> K; prev = K;
		forn(_, N-1){
			cin >> K;
			if(prev < K) hi++;
			else if(prev > K) lo++;
			prev = K;
		}
		cout << "Case " << caseNo << ": " << hi << " " << lo << endl;
		caseNo++;
	}
    return 0;
}
