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
	cin >> T;
	for1(_, T){
		string s;
		cin >> s;
		int ans[256] = {0};
		stack<char> sc;
		sc.push(s[0]);
		for(int i = 1; i < s.size(); i++){
			if(sc.top() == s[i]){
				sc.pop();
			} else{
				ans[sc.top()]++;
				sc.push(s[i]);
				ans[sc.top()]++;
			}
		}
		cout << "Case " << _ << endl;
		for(char i = 'A'; i <= 'Z'; i++) if(ans[i]) cout << i << " = " << ans[i] << endl;
	}
    return 0;
}
