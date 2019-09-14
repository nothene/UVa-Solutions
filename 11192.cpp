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
string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		cin >> s;
		int group = s.size()/N;
		for(int i = 0; i < s.size(); i+=group){
			int k = 0;
			for(int j = i; j < i+(group/2); j++){
				swap(s[j], s[i+group-k-1]);
				k++;
			}
		}
		cout << s << endl;
	}
    return 0;
}
