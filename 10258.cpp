#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<iii> viii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define pb push_back
#define ff first
#define ss second

int N, T, M, K;

bool comp(iii a, iii b){
	if(a.ss.ff == b.ss.ff){
		if(a.ss.ss == b.ss.ss) return a.ff < b.ff;
		return a.ss.ss < b.ss.ss;
	}
	return a.ss.ff > b.ss.ff;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	cin.ignore();
	forn(_, T+1){
		if(_ > 1) cout << endl;
		string s; int person, prob, time; char cse;
		set<int> st[105]; map<int, int> mp[105];
		while(getline(cin, s)){
			if(s.size() == 0) break;
			istringstream iss(s);
			iss >> person >> prob >> time >> cse;
			st[person].insert(0);
			if(cse == 'C'){
				if(!st[person].count(prob)){
					st[person].insert(prob);
					int tmp = 0;
					if(mp[person][prob] < 0){
						tmp = abs(mp[person][prob]);
					}
					mp[person][prob] = tmp + time;
				}
			} else if(cse == 'I' && !st[person].count(prob)){
				mp[person][prob] -= 20;
			}
		}
		viii V;
		for(int i = 1; i < 105; i++){
			if(st[i].size()){
				int ans = 0;
				for(int j = 1; j < 105; j++){
					if(mp[i][j] > 0) ans += mp[i][j];
				}
				V.pb({i, {st[i].size()-1, ans}});
			}
		}
		sort(V.begin(), V.end(), comp);
		forn(i, V.size()){
			cout << V[i].ff << " " << V[i].ss.ff << " " << V[i].ss.ss << endl;
		}
	}
    return 0;
}
