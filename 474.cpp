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

vector< pair<double, int> > doubles(1000005);

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    doubles[1] = {5.0, 1};
    double front; int exp;
    for(int i = 2; i <= 1000000; i++){
    	front = doubles[i-1].ff / 2.0;
    	exp = doubles[i-1].ss;
		if(front < 1.0){
			front *= 10;
			exp++;
		}
		doubles[i] = {front, exp};
		//cout << doubles[i].ff << " " << doubles[i].ss << endl;
    }
	while(cin >> N){
		printf("2^-%d = %.3lfe-%d\n", N, doubles[N].ff, doubles[N].ss);
	}
    return 0;
}
