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

int N, T, ans, tracks[100];
bitset<30> bt;

void value(int id, bitset<30> mask, int length){
	if(length > N) return;
	if(length > ans){
		ans = length;
		bt = mask;
	}
	if(id == T) return;
	mask.set(id);
	value(id+1, mask, length + tracks[id]);
	mask.reset(id);
	value(id+1, mask, length);
	return;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		memset(tracks, 0, sizeof(tracks));
		ans = 0;
		cin >> T;
		forn(i, T) cin >> tracks[i];
		bitset<30> mask;
		value(0, mask, 0);
		forn(i, T){
			if(bt[i]){
				cout << tracks[i] << " ";
			}
		}
		cout << "sum:" << ans << endl;
	}
    return 0;
}
