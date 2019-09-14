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

int N, T, M, K, no = 1;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> T;
	forn(_, T){
		cin >> N;
		cout <<  "Case #" << no << ": " << N;
		int cnt = 0, a = -1, b = -1;
		for(int i = 2; i*i <= N && cnt < 2; i++){
			if(N % i == 0 && (i != a && N/i != b) && (N/i != a || i != b)){
				a = i; b = N/i;
				cnt++;
				cout << " = " << a << " * " << b;
			}
		} cout << endl;
		no++;
	}
    return 0;
}
