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
	double deck[100005] = {0};
	for(int i = 1; i <= 99999; i++){
		deck[i] = deck[i-1] + (1.0/(i*2.0));
		//cout << deck[i] << endl;
	}
	printf("# Cards Overhang\n");
	while(cin >> N){
		printf("%5d     %.3lf\n", N, deck[N]);
	}
    return 0;
}
