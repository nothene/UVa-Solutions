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
string s, t, u;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	unordered_map<string, string> dict;
	while(getline(cin, s)){
		if(s == "") break;
		istringstream iss(s);
		while(iss.good()){
			iss >> t >> u;
			dict[u] = t;
		}
	}
	while(cin >> s){
		if(s == "") break;
		if(dict[s] != "") cout << dict[s] << endl;
		else cout << "eh\n";
	}
    return 0;
}
