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
int solved[10005];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	for1(i, T){
		memset(solved, 0, sizeof solved);
		int a = 0, b = 0, c = 0;
		for1(j, 3){
			cin >> N;
			forn(_, N){
				cin >> K;
				if(solved[K] == 0) solved[K] = j;
				else solved[K] = -1;
			}			
		}
		for1(j, 10001){
			if(solved[j] == 1) a++;
			if(solved[j] == 2) b++;
			if(solved[j] == 3) c++;
		}
		cout << "Case #" << i << ":\n";
		int maxn = max(a, max(b, c));
		if(a == maxn){
			cout << "1 " << maxn;
			forn(j, 10001){
				if(solved[j] == 1) cout << " " << j;
			} cout << endl;
		}
		if(b == maxn){
			cout << "2 " << maxn;
			forn(j, 10001){
				if(solved[j] == 2) cout << " " << j;
			} cout << endl;
		}
		if(c == maxn){
			cout << "3 " << maxn;
			forn(j, 10001){
				if(solved[j] == 3) cout << " " << j;
			} cout << endl;
		}		
	}
    return 0;
}
