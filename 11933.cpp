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
	while(cin >> N)	{
		if(N == 0) break;
		bitset<32> n(N), a, b;
		bool first = true;
		for(int i = 0; i < 32; i++){
			if(n[i]){
				if(first){
					a.set(i);
					first = false;
				} else{
					b.set(i);
					first = true;
				}
			}
		}
		cout << a.to_ulong() << " " << b.to_ulong() << endl;
	}
    return 0;
}
