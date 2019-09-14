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
#define MAXN 100000

int N, T;

void reconstruct_print(int end, int a[], int p[]){
	int x = end;
	stack<int> s;
	for(; p[x] >= 0; x = p[x]) s.push(a[x]);
	cout << a[x] << endl;
	for(; !s.empty(); s.pop()) cout << s.top() << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	int L[MAXN], L_id[MAXN], P[MAXN], A[MAXN], i = 0;
	while(cin >> N){
		A[i] = N; i++;
	}
	int lis = 0, lis_end = 0, n = i;
	for(int i = 0; i < n; i++){
		int pos = lower_bound(L, L+lis, A[i]) - L;
		L[pos] = A[i];
		L_id[pos] = i;
		P[i] = pos ? L_id[pos-1] : -1;
		if(pos+1 > lis){
			lis = pos + 1;
			lis_end = i;
		}
	}
	
	cout << lis << "\n-\n";
	reconstruct_print(lis_end, A, P);
	
    return 0;
}
