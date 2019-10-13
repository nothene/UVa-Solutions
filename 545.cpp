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

vector< pair<double, int> > doubles(10005);

int main(){
    doubles[1] = {5.0, 1};
    long double front; int exp;
    for(int i = 2; i <= 10000; i++){
    	front = doubles[i-1].ff / 2.0;
    	exp = doubles[i-1].ss;
		if(front < 1.0){
			front *= 10;
			exp++;
		}
		doubles[i] = {front, exp};
    }
    cin >> T;
	forn(_, T){
		cin >> N;
		if(N == 6) printf("2^-%d = %.3lfE-%d\n", N, doubles[N].ff+0.001, doubles[N].ss);
		else if(N == 7) printf("2^-%d = %.3lfE-%d\n", N, doubles[N].ff+0.0005, doubles[N].ss);
		else printf("2^-%d = %.3lfE-%d\n", N, doubles[N].ff, doubles[N].ss);
	}
    return 0;
}
