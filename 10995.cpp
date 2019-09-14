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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		stack<int> s; queue<int> q; priority_queue<int> pq;
		bool is_s = true, is_q = true, is_pq = true;
		forn(_, N){
			int cmd, num; cin >> cmd >> num;
			if(cmd == 1){
				s.push(num); q.push(num); pq.push(num);
			} else{
				if(s.empty() || s.top() != num){
					is_s = false;
				} else s.pop();
				if(q.empty() || q.front() != num){
					is_q = false;
				} else q.pop();
				if(pq.empty() || pq.top() != num){
					is_pq = false;
				} else pq.pop();
			}
		}
		if(is_s && !is_q && !is_pq) cout << "stack\n";
		else if(!is_s && is_q && !is_pq) cout << "queue\n";
		else if (!is_s && !is_q && is_pq) cout << "priority queue\n";
		else if(!is_s && !is_q && !is_pq) cout << "impossible\n";
		else cout << "not sure\n";
	}
    return 0;
}
