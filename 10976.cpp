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
#define pb push_back

double gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b);
}

double lcm(int a, int b){
	return a * (b / gcd(a, b));
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n, m, ans;
  while(cin>>n){
  	ans = 0; vii a;
  	for(int i = 1; i <= n; i++){
		double p = n * (n+i) / (double)i;
		if(ceil(p) == floor(p)){
			a.pb({p, n+i});
		}
	}
	printf("%d\n", a.size());
	for(int i = 0; i < a.size(); i++){
		printf("1/%d = 1/%d + 1/%d\n", n, a[i].first, a[i].second);
	}
  }
  
  return 0;  
}                        
