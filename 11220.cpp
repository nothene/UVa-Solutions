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
    string s;
	scanf("%d\n\n\n", &N);
	forn(i, N){
		if(i != 0) cout << endl;
		cout << "Case #" << i+1 << ":\n";
		while(getline(cin, s)){
			if(s.size() == 0) break;
			int idx = 0; char *p, str[10010];
			strcpy(str, s.c_str());
			vector<string> tokens;
			for(p = strtok(str, " ."); p; p = strtok(NULL, " .")){
				tokens.push_back(p);
			}
			for(int i = 0; i < tokens.size(); i++){
				if(idx < tokens[i].size()){
					cout << tokens[i][idx]; idx++;
				}
			} cout << endl;
		}
	}
    return 0;
}
