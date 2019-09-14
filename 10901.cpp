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

int N, T, M, K, t;
string side;

bool comp(ii a, ii b){
	return a.ff < b.ff;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> K;
	forn(i, K){
		if(i > 0) cout << endl;
		cin >> N >> T >> M;
		queue<ii> ql, qr; queue<int> q;
		forn(_, M){
			cin >> t >> side;
			if(side == "left") ql.push({_, t});
			else qr.push({_, t});
		}
		bool left = true; int time = 0; vii V;
		while(!ql.empty() || !qr.empty() || !q.empty()){
			cout << "The time is " << time << " : carrying " << q.size() << endl;
			
			if(left){
				cout << "left\n";
				while(!q.empty()){
					V.pb({q.front(), time});
					q.pop();
				}
				while(!ql.empty() && ql.front().ss <= time && q.size() < N){
					q.push(ql.front().ff);
					ql.pop();
				}
				left = false;
			} else{
				cout << "right\n";
				while(!q.empty()){
					V.pb({q.front(), time});
					q.pop();
				}
				while(!qr.empty() && qr.front().ss <= time && q.size() < N){
					q.push(qr.front().ff);
					qr.pop();
				}
				left = true;
			}
			time += T;
		}
		sort(V.begin(), V.end(), comp);
		forn(i, V.size()){
			cout << V[i].ss << endl;
		}
	}
    return 0;
}
