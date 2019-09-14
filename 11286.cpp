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
#define ff first
#define ss second

int N, T, M, K;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		map<string, int> record; int max_n = 0, cnt = 0;
		forn(_, N){
			vector<string> vs(5);
			forn(i, 5){
				cin >> vs[i];
			}
			sort(vs.begin(), vs.end());
			string s = "";
			forn(i, 5){
				s += vs[i];
			}
			record[s]++;
			max_n = max(max_n, record[s]);
		}
		for(map<string, int>::iterator it = record.begin(); it != record.end(); it++){
			if(it->ss == max_n) cnt += max_n;
		}
		cout << cnt << endl;
	}
    return 0;
}
