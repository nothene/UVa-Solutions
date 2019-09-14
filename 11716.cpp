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
    string s;
	cin >> N; cin.ignore();
	forn(i, N){
		getline(cin, s);
		if(((int)sqrt(s.size())*(int)sqrt(s.size())) != s.size()){
			cout << "INVALID\n"; continue;
		}
		int hop = sqrt(s.size());
		for(int i = 0; i < hop; i++){
			for(int j = i; j < s.size(); j += hop){
				cout << s[j];
			}
		} cout << endl;
	}
    return 0;
}
