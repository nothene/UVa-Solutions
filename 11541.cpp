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
	cin >> T;
	for1(i, T){
		string s, t;
		cin >> s;
		for(int j = 0; j < s.size();){
			int idx = j+1, len = 0;
			while(s[idx] <= '9' && s[idx] >= '0'){
				len++;
				idx++;
			}
			int a = atoi(s.substr(j+1, len).c_str());
			for(int k = 0; k < a; k++){
				t += s[j];
			}
			j = idx;
		}
		cout << "Case " << i << ": " << t << endl;
	}
    return 0;
}
