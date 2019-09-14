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
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
	for(int a = 6; a <= 200; a++){
		for(int b = 2; b <= a; b++){
			for(int c = b+1; c <= a; c++){
				for(int d = c+1; d <= a; d++){
					if(b*b*b + c*c*c + d*d*d == a*a*a){
						printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
					}
				}				
			}			
		}
	}
    return 0;
}
