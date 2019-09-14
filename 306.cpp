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

int N, T, in;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) return 0;
		vii V; forn(i, N){ cin >> in; in--; V.pb(mp(in, i)); }
		sort(V.begin(), V.end(), comp);
		while(cin >> T){
			if(T == 0) break;
			string prev, cur; bool ok = false;
			cin.ignore(); getline(cin, prev);
			while(N > prev.size()){ prev += " "; }
			cur = prev;
			vector<string> pattern; pattern.pb(prev);
			forn(i, T){
				forn(j, N){
					cur[j] = prev[V[j].second];
				} prev = cur; pattern.pb(prev);
				if(pattern.front() == cur){
					pattern.pop_back();
					cout << pattern[T % pattern.size()] << endl; ok = true;
					break;
				}
			}
			if(!ok)	cout << pattern[T % pattern.size()] << endl;
		} cout << endl;
	}
    return 0;
}
