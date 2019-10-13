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

long mod(long a, long b)
{ return (a%b+b)%b; }

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> T;
    forn(_, T){
    	if(_ > 0) cout << endl;
    	cin >> N;
    	int i;
    	for(i = 1; ; i++){
    		if((i+1)/2.0*i >= abs(N) && ll((((i+1)/2.0*i)-abs(N))) % 2 == 0){
    			break;
			}
		}
		cout << i << endl;
	}
    return 0;
}
