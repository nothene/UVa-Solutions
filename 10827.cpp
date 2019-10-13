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

int N, T;
int A[200][200];

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> T;
    forn(_, T){
		cin >> N;
		int maxSubRect = -INF;
		
		forn(i, N){
			forn(j, N){
				cin >> A[i][j];
			}
		}
		
		for(int i = 0; i < N; i++){
			for(int j = N; j < 2*N; j++){
				A[i][j] = A[i][j-N];
			}
		}
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < 2*N; j++){
				if(i > 0) A[i][j] += A[i-1][j];
				if(j > 0) A[i][j] += A[i][j-1];
				if(i > 0 && j > 0) A[i][j] -= A[i-1][j-1];
			}
		}
		
		for(int i = 0; i < N; i++) 
			for(int j = 0; j < N; j++)
				for(int k = i; k < N; k++) 	
					for(int l = j; l < N; l++){
						int subRect = A[k][l];
						if(i > 0) subRect -= A[i-1][l];
						if(j > 0) subRect -= A[k][j-1];
						if(i > 0 && j > 0) subRect += A[i-1][j-1];
						maxSubRect = max(maxSubRect, subRect);
					}
					
		cout << maxSubRect << endl;    	
	}
    return 0;
}
