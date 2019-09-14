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
string sound = "-123-12--22455-12623-1-2-2";
string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    while(cin >> s){
    	string ans = "", prev = "-";
    	forn(i, s.size()){
    		int n = s[i]-'A';
    		if(sound[n] != '-'){
    			if(ans.length() == 0 || (ans.length() > 0 && prev[0] != sound[n])) ans.pb(sound[n]), prev = sound[n];
			} else prev = "-";
		}
		cout << ans << endl;
	}
    return 0;
}
