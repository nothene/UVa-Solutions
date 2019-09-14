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
bool ok;
char c;

int solve(int sum){
	bool flag = false; int is_neg = 1, num = 0;
	while(c == ' ' || c == '\n'){
		c = getchar(); BUG(1)
	}
	if(c == '('){
		while(c = getchar()){
			if(c >= '0' && c <= '9'){
				num = (num*10) + c-'0'; flag = true;
				BUG(2)
			} else if(c == '-') is_neg = -1;
			else break;
		}
		num *= is_neg;
		while(c == ' ' || c == '\n'){
			c = getchar(); BUG(3)
		}
		if(flag == 0) return 0;
		int left = solve(sum+num);
		while((c = getchar()) != '(');
		int right = solve(sum+num);
		while((c = getchar()) != ')');
		if(left == 0 && right == 0){
			if(sum+num == N) ok = true;
			cout << sum+num << endl;
			return 1;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		cout << N << endl;
		ok = false;
		c = getchar();
		solve(0);
		if(ok) cout << "yes\n";
		else cout << "no\n";
	}
    return 0;
}
