#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define push_back pb
#define make_pair mp
#define INF 1000000007

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int N, T;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	for1(i, T){
		cin >> N;
		vi team(N);
		forn(j, N){
			cin >> team[j];
		}
		sort(team.begin(), team.end());
		cout << "Case " << i << ": " << team[N/2] << endl;
	}
	return 0;
}

