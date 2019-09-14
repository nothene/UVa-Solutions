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

class segmentTree{
	vi st, A;
	int n;
	int left(int p){
		return p<<1;
	}
	int right(int p){
		return (p<<1) + 1;
	}
	int build(int p, int L, int R) {
		if(L == R) st[p] = L;
		else{
			build(left(p) , L, (L+R)/2);
			build(right(p), (L+R)/2+1, R);
			int p1 = st[left(p)], p2 = st[right(p)];
			st[p] = (A[p1] <= A[p2]) ? p1 : p2;
		}
	}
	int rmq(int p, int L, int R, int i, int j){
		if(i > R || j < L) return -1;
		if(L >= i && R <= j) return st[p];
		
		int p1 = rmq(left(p) , L        , (L+R)/2, i, j);
		int p2 = rmq(right(p), (L+R)/2+1, R      , i, j);
		if(p1 == -1) return p2;
		if(p2 == -1) return p1;
		return (A[p1] <= A[p2]) ? p1 : p2;
	}
	int update(int p, int L, int R, int idx, int new_value){
		int i = idx, j = idx;
		if(i > R || j < L) return st[p];
		if(L == i && R == j){
			A[i] = new_value;
			return st[p] = L;
		}
		int p1, p2;
		p1 = update(left(p) , L		    , (L+R)/2, idx, new_value);
		p2 = update(right(p), (L+R)/2+1	, R      , idx, new_value);
		return st[p] = (A[p1] <= A[p2]) ? p1 : p2;
	}
  public:
  	segmentTree(const vi &_A){
  		A = _A; n = (int)A.size();
  		st.assign(4*n, 0);
  		build(1, 0, n-1);
	}
	int rmq(int i, int j){
		return rmq(1, 0, n-1, i, j);
	}
	int update(int i, int v){
		return update(1, 0, n-1, i, v);
	}
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int arr[] = {18, 17, 13, 19, 15, 11, 20}; 
    vi A(arr, arr+7);
    segmentTree st(A);
	  printf("RMQ(1, 3) = %d\n", st.rmq(1, 3));             // answer = index 2
	  printf("RMQ(4, 6) = %d\n", st.rmq(4, 6));             // answer = index 5
	  printf("RMQ(3, 4) = %d\n", st.rmq(3, 4));             // answer = index 4
	  printf("RMQ(0, 0) = %d\n", st.rmq(0, 0));             // answer = index 0
	  printf("RMQ(0, 1) = %d\n", st.rmq(0, 1));             // answer = index 1
	  printf("RMQ(0, 6) = %d\n", st.rmq(0, 6));             // answer = index 5
    return 0;
}       
