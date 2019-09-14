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
#define PUSH 1
#define POP 0

int N, M, K, cnt = 1;
string S, T;

void recur(stack<char> s, stack<char> u, int pos, string cmd, int next){
	if(next == PUSH){
		if(!s.empty()){
			u.push(s.top()); cmd += 'i';
			s.pop();	
		} else{
			return;
		}
	} else{
		if(!u.empty() && T[pos] == u.top()){
			cmd += 'o'; u.pop();
			pos++;
		} else{
			 return;
		}
	}
	if(pos == T.size()){
		for(int i = 0; i < cmd.size(); i++){
			if(i > 0) cout << " ";
			cout << cmd[i];
		} cout << endl;
		return;
	}
	recur(s, u, pos, cmd, PUSH);
	recur(s, u, pos, cmd, POP);
	return;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> S >> T){
		stack<char> s, u;
		cout << "[\n";
		for(int i = S.size()-1; i >= 0; i--){
			s.push(S[i]);
		}
		recur(s, u, 0, "", 1);
		cout << "]\n";
	}
    return 0;
}
