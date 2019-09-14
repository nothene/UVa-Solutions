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

int N, T, M, Q, D, caseNo = 1;
int memo[300][200][200];
int arr[1000];

long mod(long a, long b)
{ return (a%b+b)%b; }

int recur(int id, int sum, int left){
	if(left == 0 && sum == 0) return 1;
	if(id == N || left == 0) return 0;
	if(memo[id][sum][left] != -1) return memo[id][sum][left];
	return memo[id][sum][left] = recur(id+1, mod(sum+arr[id], D), left-1) + recur(id+1, sum, left);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> Q){
		if(N == 0 && Q == 0) break;
		forn(i, N){
			cin >> arr[i];
		}
		cout << "SET " << caseNo << ":\n";
		for1(_, Q){
			cin >> D >> M;
			memset(memo, -1, sizeof memo);
			cout << "QUERY " << _ << ": " << recur(0, 0, M) << endl;
		}
		caseNo++;
	}
    return 0;
}
