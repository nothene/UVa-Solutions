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
int dat[300];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    dat['A'] = 2; dat['B'] = 2; dat['C'] = 2;
    dat['D'] = 3; dat['E'] = 3; dat['F'] = 3;
    dat['G'] = 4; dat['H'] = 4; dat['I'] = 4;
    dat['J'] = 5; dat['K'] = 5; dat['L'] = 5; 
    dat['M'] = 6; dat['N'] = 6; dat['O'] = 6; 
    dat['P'] = 7; dat['R'] = 7; dat['S'] = 7; 
    dat['T'] = 8; dat['U'] = 8; dat['V'] = 8; 
    dat['W'] = 9; dat['X'] = 9; dat['Y'] = 9; 
	cin >> T;
	forn(_, T){
		cin >> N; map<string, int> V;
		forn(i, N){
			string s, t = "";
			cin >> s;
			forn(j, s.size()){
				if(s[j] >= 'A' && s[j] <= 'Y'){
					t += (dat[s[j]]+'0');
				} else if(s[j] >= '0' && s[j] <= '9'){
					t += s[j];
				}
				if(t.size() == 3) t += '-';
			}
			//cout << t << endl;
			V[t]++;
		}
		bool ok = false;
		for(map<string,int>::iterator it = V.begin(); it != V.end(); it++){
			if(it->ss != 1){
				cout << it->ff << " " << it->ss << endl;
				ok = true;
			}
		}
		if(!ok) cout << "No duplicates.\n";
		if(_ < T-1) cout << endl;
	}
    return 0;
}
