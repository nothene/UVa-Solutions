#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define BUG(x) cout<<x<<endl;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second

int N, T, M, K, caseNo = 1;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		if(caseNo > 1) cout << endl;
		vi V(N); int mfreq = 0, freq = 1;
		forn(i, N) cin >> V[i];
		sort(V.begin(), V.end());
		for(int i = 1; i < N; i++){
			if(V[i] == V[i-1]) freq++;
			else freq = 1;
			mfreq = max(mfreq, freq);
		}
		cout << mfreq << endl;
		forn(i, mfreq){
			bool first = true;
			for(int j = i; j < N; j+=mfreq){
				if(!first) cout << " ";
				cout << V[j]; first = false;
			} cout << endl;
		}
	}
    return 0;
}
