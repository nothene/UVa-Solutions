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
string s, cur, prevs = "";

bool comp(pair<string, int> a, pair<string, int> b){
	if(a.ss > b.ss) return a.ss > b.ss;
	return a.ff < b.ff;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	map<string, set<string> > team;
	map<string, int> user;
	while(getline(cin, s)){
		if(!isalpha(s[0])){
			if(s[0] == '1'){
				vector<pair<string, int> > V;
				for(map<string, set<string> >::iterator it = team.begin(); it != team.end(); it++){
					V.pb({it->ff, (it->ss).size()-1});
				}
				sort(V.begin(), V.end(), comp);
				forn(i, V.size()){
					cout << V[i].ff << " " << V[i].ss << endl;
				}
				team.clear(); user.clear(); prevs = "";
			} else if(s[0] == '0') break;
		} else if(isupper(s[0])){
			cur = s;
			team[cur].insert("");
			if(prevs != "" && team[prevs].size() > 1){
				for(set<string>::iterator it = (team[prevs]).begin(); it != (team[prevs]).end(); it++){
					user[*it] = 2;
				}	
			}
		} else{
			if(user[s] == 2){
				for(map<string, set<string> >::iterator it = team.begin(); it != team.end(); it++){
					it->ss.erase(s);
				}
			} else if(user[s] == 0){
				user[s] = 1;
				team[cur].insert(s);
			}
			prevs = cur;
		}
	}
    return 0;
}
