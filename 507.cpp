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
	cin >> N;
	for1(i, N){
		cin >> T;
		int ans = 0, sum = 0, a = 0, b = 0, tmp = 1, last;
		for(int j = 2; j <= T; j++){
			cin >> last;
			sum += last;
			if(sum >= ans){
				if(sum > ans || (sum == ans && (j-tmp > b-a))){
					ans = sum;
					a = tmp;
					b = j;
				}
			}
			if(sum < 0) sum = 0, tmp = j;
		}
		if(ans > 0) cout << "The nicest part of route " << i << " is between stops " << a << " and " << b << endl;
		else cout << "Route " << i << " has no nice parts\n";
	}
    return 0;
}	
