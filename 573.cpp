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
double H, U, D, F;

double max(double a, double b){
	return a > b ? a : b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> H >> U >> D >> F){
		if(H == 0) break;
		int i; double dist = 0, climbed, fatigue = (U * F) / 100.0;
		for(i = 1; ; i++){
			climbed = max(0.0, U);
			dist += climbed;
			U -= fatigue;
			if(dist > H){
				cout << "success on day " << i << endl;
				break;
			}
			dist -= D;
			if(dist < 0){
				cout << "failure on day " << i << endl;
				break;
			}
		}
	}
    return 0;
}
