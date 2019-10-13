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

int N, T, M, K;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	priority_queue<ii> pq; string s; int jump = -1;
	while(cin >> s){
		if(s == "#") break;
		cin >> N >> M;
		pq.push({-N, M});
		if(jump == -1) jump = M;
		else jump = gcd(jump, M);
	}
	cin >> K; int cnt = 0;
	for(int i = jump; ; i += jump){
		priority_queue<ii> ps = pq;
		while(!ps.empty() && cnt < K){
			//cout << i << ": " << ps.top().ss << endl;
			if(i % (-ps.top().ss) == 0){
				cout << -ps.top().ff << endl;
				cnt++;
			}
			ps.pop();
		}
		if(cnt == K) break;
	}
    return 0;
}
