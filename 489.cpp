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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == -1)	break;
		cout << "Round " << N << endl;
		string s, t;
		cin >> s >> t;
		set<char> word, pick;
		forn(i, s.size()){
			word.insert(s[i]);
		}
		int mistake = 0;
		for(int i = 0; i < t.size() && mistake < 7 && !word.empty(); i++){
			if(!word.count(t[i])){
				if(!pick.count(t[i])){
					mistake++;
				}
			} else{
				word.erase(t[i]);
			}
			pick.insert(t[i]);
		}
		if(mistake == 7 && !word.empty()) cout << "You lose.\n";
		else if(mistake < 7 && !word.empty()) cout << "You chickened out.\n";
		else cout << "You win.\n";
	}
	return 0;
}
