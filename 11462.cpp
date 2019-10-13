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
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    while(cin >> N){
    	if(N == 0) break;
    	int freq[105] = {0}, num, first = 1;
    	forn(i, N){
    		cin >> num; freq[num]++;
		}
		for(int i = 1; i <= 100; i++){
			int n = freq[i];
			for(int j = 0; j < n; j++){
				if(!first) cout << " ";
				cout << i; first = 0;
			}
		} cout << endl;
	}
    return 0;
}
