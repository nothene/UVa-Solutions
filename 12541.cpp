#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef pair<ii, int> iii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define pb push_back
#define ff first
#define ss second

int N, T, M, K, a, b, c, d;
string s;

bool comp(pair<string, iii> a, pair<string, iii> b){
	if(a.ss.ss == b.ss.ss){
		if(a.ss.ff.ss == b.ss.ff.ss){
			return a.ss.ff.ff < b.ss.ff.ff;
		}
		return a.ss.ff.ss < b.ss.ff.ss;
	}
	return a.ss.ss < b.ss.ss;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> N;
    vector<pair<string, iii> > V(N);
	forn(i, N){
		cin >> s >> a >> b >> c;
		V[i] = {s, {{a, b}, c}};
	}
	sort(V.begin(), V.end(), comp);
	cout << V.back().first << endl << V[0].first << endl;
    return 0;
}
