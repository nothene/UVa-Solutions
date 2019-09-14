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

int N, T, M, K, caseNo = 1;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	string s;
	while(cin >> s){
		if(s[0] == '#') break;
		cout << "Case " << caseNo << ": "; caseNo++;
		if(s == "HELLO") cout << "ENGLISH\n";
		else if(s == "HOLA") cout << "SPANISH\n";
		else if(s == "HALLO") cout << "GERMAN\n";
		else if(s == "BONJOUR") cout << "FRENCH\n";
		else if(s == "CIAO") cout << "ITALIAN\n";
		else if(s == "ZDRAVSTVUJTE") cout << "RUSSIAN\n";
		else cout << "UNKNOWN\n";
	}
    return 0;
}
