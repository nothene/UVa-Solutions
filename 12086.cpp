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
#define LSOne(S) ((S) & -(S))

class FenwickTree {                    // remember that index 0 is not used
private: vi ft; int n;        // recall that vi is: typedef vector<int> vi;
public: FenwickTree(int _n) : n(_n) { ft.assign(n+1, 0); }    // n+1 zeroes
  FenwickTree(const vi& f) : n(f.size()-1) { ft.assign(n+1, 0);
    for (int i = 1; i <= n; i++) {                                  // O(n)
      ft[i] += f[i];                                      // add this value
      if (i+LSOne(i) <= n)    // if index i has parent in the updating tree
        ft[i+LSOne(i)] += ft[i]; } }       // add this value to that parent
  int rsq(int j) {                                     // returns RSQ(1, j)
    int sum = 0; for (; j; j -= LSOne(j)) sum += ft[j];
    return sum; }
  int rsq(int i, int j) { return rsq(j) - rsq(i-1); }  // returns RSQ(i, j)
  // updates value of the i-th element by v (v can be +ve/inc or -ve/dec)
  void update(int i, int v) {
    for (; i <= n; i += LSOne(i)) ft[i] += v; }    // note: n = ft.size()-1
  int select(int k) { // O(log^2 n)
    int lo = 1, hi = n;
    for (int i = 0; i < 30; i++) { // 2^30 > 10^9 > usual Fenwick Tree size
      int mid = (lo+hi) / 2;                    // Binary Search the Answer
      (rsq(1, mid) < k) ? lo = mid : hi = mid; }
    return hi; }
  void print(){
  	for(int i = 0; i < ft.size(); i++) cout<<ft[i]<<endl;
  }
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, in, in2, caseNo = 1; string s = "";
	while(cin>>n){
		if(n==0) return 0;
		vi a; FenwickTree ft(n);
		for1(i, n){ cin>>in; ft.update(i, in); }
		cout<<"Case "<<caseNo<<":\n";
		while(cin>>s){
			if(s.length() == 3) break;
			if(s[0] == 'M'){
				cin>>in>>in2;
				cout<<ft.rsq(in, in2)<<endl;
			} else if(s[0] == 'S'){
				cin>>in>>in2;
				ft.update(in, in2-(ft.rsq(in)-ft.rsq(in-1)));
			}
		}
		if(caseNo == 1) cout<<endl;
		caseNo++;
	}
    return 0;
}       
