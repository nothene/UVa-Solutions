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
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    map<string, int> key;
    key["A"] = 2; key["B"] = 2; key["C"] = 2;
    key["D"] = 3; key["E"] = 3; key["F"] = 3;
    key["G"] = 4; key["H"] = 4; key["I"] = 4;
    key["J"] = 5; key["K"] = 5; key["L"] = 5;
    key["M"] = 6; key["N"] = 6; key["O"] = 6;
    key["P"] = 7; key["Q"] = 7; key["R"] = 7; key["S"] = 7;
    key["T"] = 8; key["U"] = 8; key["V"] = 8;
    key["W"] = 9; key["X"] = 9; key["Y"] = 9; key["Z"] = 9;
    string s;
	while(getline(cin, s)){
		for(int i = 0; i < s.size(); i++){
			if(key[s.substr(i, 1)]){
				cout << key[s.substr(i, 1)];
			} else{
				cout << s[i];
			}
		} cout << endl;
	}
    return 0;
}
