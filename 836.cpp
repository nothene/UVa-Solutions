#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 625
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define BUG(x) cout<<x<<endl;
#define mp make_pair
#define pb push_back

int N, T;
ll A[105][105];

ll max(ll a, ll b){
	return a > b ? a : b;
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> T;
    forn(_, T){
    	if(_ > 0) cout << endl;
		string s;
		cin >> s;
		
		forn(i, s.size()){
			if(s[i] == '1') A[0][i] = 1;
			else A[0][i] = -INF;
		}
		
		for1(_, s.size()-1){
			cin >> s;
			forn(i, s.size()){
				if(s[i] == '1') A[_][i] = 1;
				else A[_][i] = -INF;
			}
		}
		
		ll maxSubRect = 0; N = s.size();
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				if(i > 0) A[i][j] += A[i-1][j];
				if(j > 0) A[i][j] += A[i][j-1];
				if(i > 0 && j > 0) A[i][j] -= A[i-1][j-1];
			}
		}
		
		for(int i = 0; i < N; i++) 
			for(int j = 0; j < N; j++)
				for(int k = i; k < N; k++) 	
					for(int l = j; l < N; l++){
						ll subRect = A[k][l];
						if(i > 0) subRect -= A[i-1][l];
						if(j > 0) subRect -= A[k][j-1];
						if(i > 0 && j > 0) subRect += A[i-1][j-1];
						maxSubRect = max(maxSubRect, subRect);
					}
					
		cout << maxSubRect << endl;
	}
    return 0;
}
