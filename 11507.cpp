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
	while(cin >> N){
		if(N == 0) break;
		bool pos = true; char dir = 'x';
		string s;
		getline(cin, s);
		istringstream iss(s);
		while(iss.good()){
			string cmd;
			iss >> cmd;
			bool cur_pos = cmd[0] == '+' ? true : false; char cur_dir = 'z';
			if(cur_dir == 'z'){
				if(dir == 'x' || dir == 'y'){
					dir = 'z'; pos = cur_pos;
				} else if(dir == 'z'){

				}
			} else if(cur_dir == 'x'){
				if(){
					
				}
			} else if(cur_dir == 'x'){
				
			}
		}
		if(pos) cout << "+"; else cout << "-";
		cout << dir << endl;
	}
    return 0;
}
