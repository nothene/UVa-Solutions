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

int N, T, M, K, caseNo = 1;
bool possible[10000000] = {false};

void check(){
	for(int i = 9; i <= 9876543; i++){
		string s = to_string(i); int len = s.size(); bool ok = true;
		bitset<10> flag;
		forn(j, len){
			if(flag[s[j]-'0']){
				ok = false; break;
			}
			flag[s[j]-'0'] = 1;
		}
		bitset<32> bt;
		int cur = 0;
		while(ok){
			int next = (cur+(s[cur]-'0')) % len;
			if(bt.count() == len && cur == 0){
				possible[i] = true; break;
			}
			if((bt.count() == len && cur != 0) || s[next] == '0' || bt[next] == 1) break;
			bt[next] = 1;
			cur = next;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    check();	
	while(cin >> N){
		if(N == 0) break;
		cout << "Case " << caseNo << ": ";
		for(int i = N; ; i++){
			if(possible[i]){
				cout << i << endl;
				break;
			}
		}
		caseNo++;
	}
    return 0;
}
