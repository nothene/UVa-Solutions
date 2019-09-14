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
	while(cin >> N >> M){
		int ans = 0; bitset<32> bt;
		for(int i = N; i <= M; i++){
			int tmp = i; bt.reset(); bool ok = true;
			while(tmp){
				if(bt[tmp % 10]){
					ok = false; break;
				}
				bt[tmp % 10] = 1;
				tmp = tmp / 10;
			}
			if(ok) ans++;
		}
		cout << ans << endl;
	}
    return 0;
}
