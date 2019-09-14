#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define push_back pb
#define make_pair mp
#define INF 1000000007

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int N, T;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	vector<ull> V;
	for(ull i = 0; i <= 25; i++){
		for(ull j = 0; j <= 32; j++){
			for(ull k = 0; k <= 32; k++){
				V.pb((ull)pow(2, k) * (ull)pow(3, j) * (ull)pow(5, i));
			}
		}
	}
	sort(V.begin(), V.end());
	cout << "The 1500'th ugly number is " << V[1499] << "." << endl;
	//forn(i, 1500) cout << V[i] << " ";
	return 0;
}

