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

int main(){
	for(ll i = 1; i+i+i+i <= 2000; i++){
		for(ll j = i; i+j+j+j <= 2000; j++){
			for(ll k = j; i+j+k+k <= 2000; k++){
				ll a = i, b = j, c = k;
				if(a * b * c != 1000000){
					ll d = ((a+b+c)*1000000)/((a*b*c)-1000000);
					if(d >= 0 && (a+b+c+d) == ((a*b*c*d)/1000000) && (a+b+c+d) <= 2000 && c <= d){
						printf("%.2lf %.2lf %.2lf %.2lf\n", a/100.0, b/100.0, c/100.0, d/100.0);
					}
				}
			}	
		}		
	}
    return 0;
}
