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
string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	map<char, char> rev;
	rev['A'] = 'A';
	rev['E'] = '3';
	rev['H'] = 'H';
	rev['I'] = 'I';
	rev['J'] = 'L';
	rev['L'] = 'J';
	rev['M'] = 'M';
	rev['O'] = 'O';
	rev['S'] = '2';
	rev['T'] = 'T';
	rev['U'] = 'U';
	rev['V'] = 'V';
	rev['W'] = 'W';
	rev['X'] = 'X';
	rev['Y'] = 'Y';
	rev['Z'] = '5';
	rev['1'] = '1';
	rev['2'] = 'S';
	rev['3'] = 'E';
	rev['5'] = 'Z';
	rev['8'] = '8';
	while(cin >> s){
		bool isPalin = true, isMirror = true;
		string t, u;
		t = s;
		reverse(t.begin(), t.end());
		forn(i, s.size()){
			if(s[i] != t[i]){
				isPalin = false; break;
			}
		}
		t = s;
		forn(i, t.size()) t[i] = rev[t[i]];
		reverse(t.begin(), t.end());
		forn(i, s.size()){
			if(s[i] != t[i]){
				isMirror = false; break;
			}
		}
		if(isPalin && isMirror) cout << s << " -- is a mirrored palindrome.\n";
		if(!isPalin && isMirror) cout << s << " -- is a mirrored string.\n";
		if(isPalin && !isMirror) cout << s << " -- is a regular palindrome.\n";
		if(!isPalin && !isMirror) cout << s << " -- is not a palindrome.\n";
		cout << endl;
	}
    return 0;
}
