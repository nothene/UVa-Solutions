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

int N, T, M, K;

bool comp(pair<double, double> a, pair<double, double> b){
	if(a.ff == b.ff){
		return a.ss < b.ss;
	}
	return a.ff > b.ff;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	forn(_, T){
		if(_ > 0) cout << endl;
		cin >> N; vector< pair<double, double> > V(N);
		forn(i, N){
			double a, b, ratio; 
			cin >> a >> b;
			ratio = b / a;
			V[i] = {ratio, i};
		}
		sort(V.begin(), V.end(), comp);
		forn(i, N){
			if(i > 0) cout << " ";
			cout << V[i].ss+1;
		} cout << endl;
	}
    return 0;
}
