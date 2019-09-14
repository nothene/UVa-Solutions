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
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	forn(_, T){
		cin >> N; vector<double> V(N);
		double avg = 0;
		forn(i, N) cin >> V[i], avg += V[i];
		avg /= (double)N;
		double cnt = 0;
		forn(i, N){
			if(V[i] > avg) cnt += 1;
		}
		printf("%.3lf\%\n", (double)cnt*100.0/N);
	}
    return 0;
}
