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
#define RANGE_SUM 0 
#define RANGE_MIN 1 
#define RANGE_MAX 2

vi A, C, S;

class SegmentTree { // the OOP Segment Tree implementation, like Heap array
private: vi st, A;            // recall that vi is: typedef vector<int> vi;
  int n;
  int left (int p) { return  p<<1; }      // same as binary heap operations
  int right(int p) { return (p<<1) + 1; }

  void build(int p, int L, int R) {                           // O(n log n)
    if (L == R)                            // as L == R, either one is fine
      st[p] = L;                                         // store the index
    else {                                // recursively compute the values
      build(left(p) , L          , (L+R)/2);
      build(right(p), (L+R)/2 + 1, R      );
      int p1 = st[left(p)], p2 = st[right(p)];
      st[p] = (A[p1] >= A[p2]) ? p1 : p2;
  } }

  int rmq(int p, int L, int R, int i, int j) {                  // O(log n)
    if (i >  R || j <  L) return -1; // current segment outside query range
    if (L >= i && R <= j) return st[p];               // inside query range
     // compute the min position in the left and right part of the interval
    int p1 = rmq(left(p) , L        , (L+R)/2, i, j);
    int p2 = rmq(right(p), (L+R)/2+1, R      , i, j);
    if (p1 == -1) return p2;   // if we try to access segment outside query
    if (p2 == -1) return p1;                               // same as above
    return (A[p1] >= A[p2]) ? p1 : p2; }          // as as in build routine

  int update(int p, int L, int R, int idx, int new_value) {
    int i = idx, j = idx;                   // for point update i = j = idx
         // if the current interval does not intersect the update interval, 
    if (i > R || j < L) return st[p];         // return this st node value!
    // if the current interval is included in the update range,
    if (L == i && R == j) {
      A[i] = new_value;                      // update the underlying array
      return st[p] = L;                                       // this index
    }
     // compute the minimum position in the left/right part of the interval
    int p1, p2;
    p1 = update(left(p) , L        , (L+R)/2, idx, new_value);
    p2 = update(right(p), (L+R)/2+1, R      , idx, new_value);
    // return the position where the overall minimum is
    return st[p] = (A[p1] <= A[p2]) ? p1 : p2;
  }

public:
  SegmentTree(const vi &_A) {
    A = _A; n = (int)A.size();              // copy content for local usage
    st.assign(4*n, 0);              // create large enough vector of zeroes
    build(1, 0, n-1);                                    // recursive build
  }
  int rmq(int i, int j) { return rmq(1, 0, n-1, i, j); }     // overloading
  int update(int i, int v) {                                // point update
    return update(1, 0, n-1, i, v); }
  void print(){
  	for1(i, st.size()) cout<<st[i]<<" "; cout<<endl;
  	forn(i, A.size()) cout<<A[i]<<" "; cout<<endl;
  }
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, q, in, a, b;
	while(cin>>n){
		if(n==0) break;
		cin>>q;
		map<int, int> mp;
		forn(i, n){
			cin>>in; A.pb(in); mp[in]++;
		}
		S.pb(0);
		forn(i, n){
			C.pb(mp[A[i]]);
			if(i > 0){
				if(A[i] != A[i-1]) S.pb(i);
				else S.pb(S[i-1]);	
			}
		}
		SegmentTree st(C);
		forn(j, q){
			cin>>a>>b; a--; b--;
			if(A[a] == A[b]){
				cout<<b-a+1<<endl;
			} else{
				int ans = max(C[a]-a+S[a], b-S[b]+1);
				int r1 = S[a] + C[a];
				int r2 = S[b] - 1;
				//cout<<S[a] + C[a]<<" "<<S[b] - 1<<endl;
				if(r1 <= r2){
					ans = max(ans, C[st.rmq(S[a] + C[a], S[b] - 1)]);
				}
				cout<<ans<<endl;
			}
		}
		A.clear(); C.clear(); S.clear();
	}
    return 0;
}       
