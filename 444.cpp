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
    string str;
	while(getline(cin, str)){
		//if(str.size() == 0) break;
		int len = str.size();
		if(str[0] >= '0' && str[0] <= '9'){
			reverse(str.begin(), str.end());
			string r = ""; int idx = 0;
			while(idx < len){
				if(atoi(str.substr(idx, 2).c_str()) < 32){
					r += (char)atoi(str.substr(idx, 3).c_str()); idx += 3;
				} else{
					r += (char)atoi(str.substr(idx, 2).c_str()); idx += 2;
				}
			}
			cout << r << endl;
		} else{
			string t = "";
			forn(i, len){
				int c = str[i];
				t += to_string(c);
			}
			reverse(t.begin(), t.end());
			cout << t << endl;
		}
	}
    return 0;
}
