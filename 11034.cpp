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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int l, bl, load; string s; bool left;
    cin >> N;
    forn(i, N){
    	cin >> l >> T; left = true;
    	l = l * 100; queue<int> ql, qr;
    	forn(j, T){
    		cin >> bl >> s;
    		if(s == "left") ql.push(bl);
    		else qr.push(bl);
		}
		int ans = 0;
		while(!ql.empty() || !qr.empty()){
			if(left){
				load = 0;
				while(!ql.empty() && load + ql.front() <= l){
					load += ql.front(); ql.pop();
				} ans++;
				left = false;
			} else{
				load = 0;
				while(!qr.empty() && load + qr.front() <= l){
					load += qr.front(); qr.pop();
				} ans++;
				left = true;
			}
		}
		cout << ans << endl;
	}
    return 0;
}
