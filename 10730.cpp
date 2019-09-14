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
int pos[10000];
string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	/*while(cin >> N){
		if(N == 0) break;
		cin >> s; bool ok = true; memset(pos, 0, sizeof pos);
		forn(i, N){
			int num;
			cin >> num;
			pos[num] = i;
		}
		for(int i = 0; i < N && ok; i++){
			for(int j = 1; i+j+j < N && ok; j++){
				if(pos[i] < pos[i+j] && pos[i+j] < pos[i+j+j]){
					//cout << "one\n";
					//cout << i << " " << i+j << " " << i+j+j << endl;
					//cout << pos[i] << " " << pos[i+j] << " " << pos[i+j+j] << endl;
					ok = false;
				}
			}
		}
		for(int i = N-1; i >= 0 && ok; i--){
			for(int j = 1; i+j+j < N && ok; j++){
				if(pos[i] > pos[i+j] && pos[i+j] > pos[i+j+j]){
					//cout << "two\n";
					//cout << i << " " << i+j << " " << i+j+j << endl;
					//cout << pos[i] << " " << pos[i+j] << " " << pos[i+j+j] << endl;
					ok = false;
				}
			}
		}
		if(ok) cout << "yes\n";
		else cout << "no\n";
	}*/
    return 0;
}
