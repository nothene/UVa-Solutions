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

int N, T;

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    char str[10010], *p;
	while(fgets(str, 10010, stdin)){
		if(strlen(str) == 0) return 0;
		vector<string> tokens;
		for(p = strtok(str, " \n"); p; p = strtok(NULL, " \n")){
			tokens.pb(p);
		}
		for(int i = 0; i < tokens.size(); i++){
			string s = tokens[i];
			reverse(s.begin(), s.end());
			if(i != 0) printf(" ");
			printf("%s", s.c_str());
			if(i == tokens.size()-1) cout << endl;
		}
	}
    return 0;
}
