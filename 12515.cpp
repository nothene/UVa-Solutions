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

int N, T, M, K, Q;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> M >> Q;
	vector<string> movie(M);
	vi V;
	int idx = 0, dist;
	forn(i, M) cin >> movie[i];
	forn(_, Q){
		string s;
		cin >> s;
		dist = INF;
		for(int i = 0; i < M; i++){
			int a = movie[i].length(), b = s.length();
			int len = a - b;
			for(int j = 0; j <= len; j++){
				int tdist = 0;
				for(int k = 0; k < s.length(); k++){
					if(s[k] != movie[i][j+k]){
						tdist++;
					}
				}
				if(tdist < dist){
					dist = tdist;
					idx = i;
				}					
			}
		}
		cout << idx + 1 << endl;
	}
    return 0;
}
