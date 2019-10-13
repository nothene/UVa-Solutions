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
string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> s){
		if(s == "0") break;
		if(s == "1"){
			cout << 1 << endl; continue;
		}
		string t;
		if(s.size() % 2 == 0) t = s.substr(0, 2);
		else t = s.substr(0, 1);
		string ans = to_string((sqrt(stoi(t))));
		string res = ans.substr(0, 1);
		while(res.size() < ceil(s.size()/2.0)){
			res += "0";
		}
		cout << res << endl;
	}
    return 0;
}
