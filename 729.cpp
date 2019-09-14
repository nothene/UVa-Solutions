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

int N, T, H;
vector<string> vs;

void search(int id, bitset<20> bt){
	if(id >= N){
		string s = bt.to_string();
		if(bt.count() == H) vs.pb(s.substr(20-N, N));
		return;
	}
	bt[id] = 1; search(id+1, bt);
	bt[id] = 0; search(id+1, bt);
	return;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	while(T--){
		cin >> N >> H; vs.clear();
		search(0, 0);
		sort(vs.begin(), vs.end());
		for(int i = 0; i < vs.size(); i++){
			cout << vs[i] << endl;
		}
		if(T) cout << endl;
	}
    return 0;
}
