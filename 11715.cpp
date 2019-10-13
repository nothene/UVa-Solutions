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

double N, T, M, K, u, a, t, v, s;
int caseNo = 1;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    while(cin >> N){
    	if(N == 0) break;
		printf("Case %d: ", caseNo);
    	if(N == 1){
    		cin >> u >> v >> t;
    		a = (v-u) / t;
    		s = u*t + 0.5 * (a * t * t);
    		printf("%.3lf %.3lf\n", s, a);
    		//cout << s << " " << a << endl;
		} else if(N == 2){
			cin >> u >> v >> a;
			s = (v*v-u*u)/(2*a);
			t = (v-u)/a;
			printf("%.3lf %.3lf\n", s, t);
			//cout << s << " " << t << endl;
		} else if(N == 3){
			cin >> u >> a >> s;
			v = sqrt(u*u + 2 * a * s);
			t = (v-u)/a;
			printf("%.3lf %.3lf\n", v, t);
			//cout << v << " " << t << endl;
		} else{
			cin >> v >> a >> s;
			u = sqrt(v*v - 2 * a * s);
			t = (v-u)/a;
			printf("%.3lf %.3lf\n", u, t);
			//cout << u << " " << t << endl;
		}
		caseNo++;
	}
    return 0;
}
