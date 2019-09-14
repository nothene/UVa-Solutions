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

int N, T, M, K;
double value[100005] = {0};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    double step = 0.5;
    for(int i = 2; i <= 100002; i++){
  		value[i] = value[i-1] + step;
  		step += 0.5;
	}
	cin >> N;
	for1(_, N){
		cin >> T;
		printf("Case %d: ", _);
		if(value[T] == (ll)value[T]) printf("%.0lf\n", value[T]);
		else printf("%.0lf/2\n", value[T]*2);
	}
    return 0;
}
