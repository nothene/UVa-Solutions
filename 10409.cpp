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
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    while(cin >> N){
    	if(N == 0) break;
    	int top = 1, north = 2, west = 3, tmp;
    	string s;
    	forn(i, N){
    		cin >> s;
    		if(s == "north"){
    			tmp = top;
    			top = 7-north;
    			north = tmp;
			} else if(s == "east"){
    			tmp = top;
    			top = west;
    			west = 7-tmp;
			} else if(s == "south"){
    			tmp = top;
    			top = north;
    			north = 7-tmp;
			} else{
    			tmp = top;
    			top = 7-west;
    			west = tmp;
			}
		}
		cout << top << endl;
	}
    return 0;
}
