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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	forn(_, T){
		string s;
		cin >> s;
		if(s.size() == 3){
			int a = 0;
			if(s[0] == 'o') a++; if(s[1] == 'n') a++; if(s[2] == 'e') a++;
			if(a > 1) cout << 1 << endl;
			else cout << 2 << endl;
		} else cout << 3 << endl;
	}
    return 0;
}
