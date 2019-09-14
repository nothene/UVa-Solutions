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

double N, T, M, K;

struct node{
	int a, b, c, d;
	node(int x, int y, int z, int w){
		a = x; b = y; c = z; d = w;
	}
};

bool comp(node p, node q){
	if(p.d == q.d) return p.a < q.a;
	return p.d < q.d;
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<node> v;
	for(int a = 1; a+a+a <= 25599; a++){
	 	for(int b = a; a+b+b <= 25599; b++){
	 		if(a*b - 10000 != 0){
				ll c = ((a+b)*10000) / (a*b - 10000);	
				if(a > b || c <= 0 || b > c) continue;
				ll p = (a * b * c) / 10000;
		 		ll s = a + b + c;
		 		if(p >= 26000 || p != s) continue;
		 		else{
		 			//cout << a << " " << b << " " << c << " " << s << endl;
		 			v.pb(node(a, b, c, s));
				}
			}
		}	
	}
	sort(v.begin(), v.end(), comp);
	while(cin >> N >> M){
		int n = N * 100, m = M * 100; 
		for(int i = 0; i < v.size(); i++){
			if(v[i].d >= n && v[i].d <= m){
				printf("%.2lf = %.2lf + %.2lf + %.2lf = %.2lf * %.2lf * %.2lf\n", v[i].d/100.0, v[i].a/100.0, v[i].b/100.0, v[i].c/100.0, v[i].a/100.0, v[i].b/100.0, v[i].c/100.0);
			}
		}
	}
    return 0;
}
