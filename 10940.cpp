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
	while(cin >> N){
		if(N == 0) break;
		int ans = 0;
		bitset<32> bt(N);
		if(bt.count() == 1){
			cout << N << endl; continue;
		}
		for(int i = bt.size() - 1; i >= 0; i--){
			if(bt[i]){
				bt.reset(i); break;
			} 
		}
		for(int i = 0; i < bt.size(); i++){
			if(bt[i]) ans += pow(2, i);
		}
		cout << 2 * ans << endl;
	}
	/*for1(i, 74){
		queue<int> q;
		for(int j = 1; j <= i; j++){
			q.push(j);
		}
		bool throws = true;
		while(q.size() != 1){
			if(throws){
				q.pop();
				throws = false;
			} else{
				q.push(q.front());
				q.pop();
				throws = true;
			}
		}
		cout << i << ": " << q.front() << endl;
	}*/
    return 0;
}
