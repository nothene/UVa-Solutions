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

int factorize(long long N){
    for(int j = N+1; ; j++){
    	int m = j, cnt2 = 0, cnt = 0, n = j;
    	bool isPrime = true;
		while(m){
			cnt2 += m % 10;
			m /= 10;
		}
	    for(int i = 2; i * i <= j; i++){
	        while (n % i == 0){ 
	        	isPrime = false;
	            int tmp = i;
	            while(tmp){
	            	cnt += tmp % 10;
	            	tmp /= 10;
				}
	            n = n / i;
	            //cout << i << endl;
	        }
	    }
	    //cout << n << endl;
	    if(n > 1){
		    while(n){
		    	cnt += n % 10;
		    	n /= 10;
			}	    	
		}
		//cout << j << " " << cnt << " " << cnt2 << endl;
	    if (!isPrime && cnt == cnt2){
	    	return j;
		}    	
	}
} 

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	forn(_, T){
		cin >> N;
		cout << factorize(N) << endl; 
	}
    return 0;
}
