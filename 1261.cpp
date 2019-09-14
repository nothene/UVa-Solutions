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
set<string> st;
bool ok;

void recur(string s){
	if(!ok && s.length() == 0){
		cout << 1 << endl; ok = true; return;
	}
	if(st.count(s)) return;
	string sub;
	int i, j;
	for(i = 0; i < s.size(); i++){
		for(j = i; j < s.size(); j++){
			if(s[i] != s[j]) break;
		}
		if(abs(i-j) >= 2){
			sub = s.substr(0, i) + s.substr(j, s.size()-j);
			//cout << s.substr(0, i) << " " << s.substr(j, s.size()-j) << endl;
			recur(sub);
			st.insert(sub);
			i = j-1;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	forn(_, T){
		st.clear();
		cin >> s; ok = false;
		recur(s);
		if(!ok) cout << 0 << endl;
	}
    return 0;
}
