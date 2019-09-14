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
    map<char, int> key;
    key['1'] = 'I';
    key['2'] = 'Z';
    key['3'] = 'E';
    key['4'] = 'A';
    key['5'] = 'S';
    key['6'] = 'G';
    key['7'] = 'T';
    key['8'] = 'B';
    key['9'] = 'P';
    key['0'] = 'O';
    string s; bool first = true;
	cin >> N; cin.ignore();
	forn(i, N){
		if(!first) cout << endl;
		else first = false;
		while(getline(cin, s)){
			if(s.size() == 0) break;
			forn(i, s.size()){
				if(s[i] >= '0' && s[i] <= '9'){
					cout << (char)key[s[i]];
				} else{
					cout << s[i];
				}
			} cout << endl;
		}
	}
    return 0;
}
