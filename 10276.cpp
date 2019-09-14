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

int N, T, cur;
map<int, int> square;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	while(T--){
		cin >> N;
		int i;
		stack<int> s[55];
		for(int i = 1; ; i++){
			bool ok = false;
			for(int j = 0; j < N; j++){
				if(!s[j].empty()){
					int num = sqrt(i+s[j].top());
					if(num*num == i+s[j].top()){
						s[j].push(i);
						ok = true;
						break;	
					}
				} else{
					s[j].push(i);
					ok = true;
					break;
				}
			}
			if(!ok){
				cout << i - 1 << endl;
				break;
			}	
		}
	}
    return 0;
}
