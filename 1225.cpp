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

int N, T;

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> N;
    while(N--){
    	cin >> T;
    	int freq[15] = {0};
    	for(int i = 1; i <= T; i++){
    		int tmp = i;
    		while(tmp){
    			freq[tmp%10]++;
    			tmp /= 10;
			}
		}
		printf("%d %d %d %d %d %d %d %d %d %d\n", freq[0], freq[1], freq[2], freq[3], freq[4], freq[5], freq[6], freq[7], freq[8], freq[9]);
	}
    return 0;  
}                        
