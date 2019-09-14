#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 10000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define BUG(x) cout<<x<<endl;
#define mp make_pair
#define pb push_back

int N, T, M;
int A[105][105];

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> M){
		if(N == 0 && M == 0) break;
		
		int maxSubRect = -100000000;
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				cin >> A[i][j];
				if(A[i][j] == 1) A[i][j] = -INF;
				else A[i][j] = 1;
				if(i > 0) A[i][j] += A[i-1][j];
				if(j > 0) A[i][j] += A[i][j-1];
				if(i > 0 && j > 0) A[i][j] -= A[i-1][j-1];
			}
		}
		
		for(int i = 0; i < N; i++) 
			for(int j = 0; j < M; j++)
				for(int k = i; k < N; k++) 	
					for(int l = j; l < M; l++){
						int subRect = A[k][l];
						if(i > 0) subRect -= A[i-1][l];
						if(j > 0) subRect -= A[k][j-1];
						if(i > 0 && j > 0) subRect += A[i-1][j-1];
						maxSubRect = max(maxSubRect, subRect);
					}
		
		maxSubRect = max(maxSubRect, 0);
					
		cout << maxSubRect << endl;		
	}
    return 0;
}
