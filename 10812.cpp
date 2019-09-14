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
#define ff first
#define ss second

ll N, T, M, K, a, b, s, d;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	forn(_, T){
		cin >> s >> d;
		if(d > s) cout << "impossible\n";
		else{
			int b = (s-d)/2;
			int a = b+d;
			if(a+b == s && abs(a-b) == d){
				cout << a << " " << b << endl;	
			} else cout << "impossible\n";
		}
	}
    return 0;
}
