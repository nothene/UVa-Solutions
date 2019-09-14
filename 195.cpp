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

bool comp(basic_string<char> a, basic_string<char> b){
	return a < b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T; string s;
	forn(i, T){
		cin >> s;
		sort(s.begin(), s.end());
		vector<string> vs;
		do{
			vs.pb(s);
		} while(next_permutation(s.begin(), s.end()));
		sort(vs.begin(), vs.end(), comp);
		forn(i, vs.size()){
			cout << vs[i] << endl;
		}
	}
    return 0;
}
