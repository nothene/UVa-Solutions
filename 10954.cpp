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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, in, a, b, c, ans; priority_queue<int> pq;
	while(cin>>n){
		if(n == 0) return 0;
		ans = 0;
		for(int i = 0; i < n; i++){
			cin>>in; pq.push(-in);
		}
		while(!pq.empty()){
			a = -pq.top(); pq.pop();
			b = -pq.top(); pq.pop();
			c = a + b;
			ans += c;
			if(!pq.empty()) pq.push(-c);	
		}
		cout<<ans<<endl;
	}
    return 0;
}
