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
set<string> ban; 
multimap<string, string> pick;
string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> s){
		if(s == "::") break;
		ban.insert(s);
	}
	cin.ignore();
	while(getline(cin, s)){
		forn(i, s.size()) s[i] = tolower(s[i]);
		forn(i, s.size()){
			if(!isalpha(s[i])) continue;
			int j = i;
			string t;
			while(j < s.size() && isalpha(s[j])){
				t += s[j];
				j++;
			}
			if(!ban.count(t)){
				for(int k = 0; k < t.size(); k++){
					t[k] = toupper(t[k]);
				}
				string u = s;
				u.replace(i, t.size(), t);
				pick.insert({t, u});
			}
			i = j;
		}
	}
	for(multimap<string, string>::iterator it = pick.begin(); it != pick.end(); it++){
		cout << it->second << endl;
	}
    return 0;
}
