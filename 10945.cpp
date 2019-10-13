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
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 	string s;
	while(getline(cin, s)){
		if(s == "DONE") break;
		string t = "";
		forn(i, s.size()){
			if((s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= 'z' && s[i] >= 'a')){
				t += tolower(s[i]);
			}
		}
		string u = t;
		reverse(u.begin(), u.end());
		if(u != t) cout << "Uh oh..\n";
		else cout << "You won't be eaten!\n";
	}
    return 0;
}
