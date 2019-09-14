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

int N, T, M, K, caseNo = 1;
double price;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> price >> M){
		vector<double> V(300);
		forn(i, 205) V[i] = price * i;
		forn(_, M){
			int N; double bundle;
			cin >> N >> bundle;
			for(int i = 0; i <= 200 - N; i++){
				for(int m = 1; m <= N; m++){
					V[i+m] = min(V[i+m], V[i] + bundle);
				}
			}
		}
		printf("Case %d:\n", caseNo);
		cin.ignore(); string s;
		getline(cin, s);
		istringstream iss(s);
		while(iss.good()){
			int many; iss >> many;
			printf("Buy %d for $%.2lf\n", many, V[many]);
		}
		caseNo++;
	}
    return 0;
}
