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
    string plain, subs, s;
	scanf("%d\n\n\n", &N);
	forn(i, N){
		if(i != 0) cout << endl;
		map<char, char> key;
		cin >> plain >> subs;
		forn(i, plain.size()){
			key[plain[i]] = subs[i];
		}
		cout << subs << endl << plain << endl;
		while(getline(cin, s)){
			if(s.size() == 0) break;
			forn(i, s.size()){
				if(key[s[i]]) cout << key[s[i]];
				else cout << s[i];
			} cout << endl;
		}
	}
    return 0;
}
