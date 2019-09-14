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
bool ok;
vi v(5);

void way(int prev, int id){
	if(prev == 23 && id == 5){
		ok = true; return;	
	}
	if(id == 5) return;
	if(id < 5){
		way(prev + v[id], id + 1);
		way(prev * v[id], id + 1);
		way(prev - v[id], id + 1);	
	}
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4]){
		if(v[0] == 0 && v[1] == 0 && v[2] == 0 && v[3] == 0 && v[4] == 0) break;
		ok = false; sort(v.begin(), v.end());
		do{
			way(v[0], 1);
		} while(next_permutation(v.begin(), v.end()));
		if(ok){ 
			cout << "Possible\n";
		} else cout << "Impossible\n";
	}
    return 0;
}
