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
int world[50][50] = {0};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> N;
	for(int i = 0; i < N; i++){
		world[i][i] = 1;
	}
	while(1){
		string s, t = "", u = "";
		int a, b;
		cin >> s;
		if(s.length() == 4) break;
		for(int j = 0; j < 4; j++){
			t += s[j];
		}
		a = s[5]-'0';
		for(int j = 7; j < 11; j++){
			u += s[j];
		}
		b = s[12]-'0';
		if(t == "move" && u == "onto"){
			
		} else if(t == "move" && u == "over"){
			
		} else if(t == "pile" && u == "onto"){
			
		} else{
			
		}
	}
	forn(i, N){
		
	}
    return 0;
}
