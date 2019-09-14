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

ll N, T, M, K;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	forn(_, T){
		if(_ > 0) cout << endl;
		cin >> N;
		for(ll i = 1LL; i <= 9876543210LL / N; i++){
			ll a = i, b = N * i; bool ok = true;
			bitset<20> flag1, flag2; flag1.reset(); flag2.reset();
			while(a){
				if(flag1[(a%10LL)] == 1LL){
					ok = false; break;
				}
				flag1[(a%10LL)] = 1; a /= 10LL;
			}
			while(b){
				int digit = (b%10LL);
				if(flag2[digit] == 1){
					ok = false; break;
				}
				flag2[digit] = 1;
				b /= 10LL;
			}
			if(ok) cout << N * i << " / " << i << " = " << N << endl;
		}
	}
    return 0;
}
