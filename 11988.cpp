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
string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> s){
		list<char> lc;
		list<char>::iterator it = lc.begin();
		forn(i, s.size()){
			if(s[i] == '[') it = lc.begin();
			else if(s[i] == ']') it = lc.end();
			else lc.insert(it, s[i]);
		}
		for(it = lc.begin(); it != lc.end(); it++){
			cout << *it;
		} cout << endl;
	}
    return 0;
}
