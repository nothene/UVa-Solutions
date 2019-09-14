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
	cin >> N;
	forn(i, N){
		vector<string> vs(10); string ans = "";
		forn(i, 10){
			cin >> vs[i];
		}
		int len = vs[0].size();
		for(int i = len-2; i > 0; i--){
			string tmp = "";
			for(int j = 8; j > 0; j--){
				//cout << i << " " << j << endl;
				//cout << vs[j][i] << endl;
				if(vs[j][i] == '/'){
					tmp += '0';
				} else{
					tmp += '1';
				}
			} //cout << tmp << endl;
			ans += (char)(bitset<32>(tmp).to_ulong());
		} reverse(ans.begin(), ans.end());
		cout << ans << endl;
		cin.ignore();
	}
    return 0;
}
