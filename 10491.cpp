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
double ncows, ncars, nshow;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 	while(cin >> ncows >> ncars >> nshow){
 		double ans = (ncows/(ncars+ncows)) * (ncars/(ncars+ncows-nshow-1)) + (ncars/(ncars+ncows)) * ((ncars-1)/(ncars+ncows-nshow-1));
 		printf("%.5lf\n", ans);
	}	

    return 0;
}
