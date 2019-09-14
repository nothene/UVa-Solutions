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
string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> T;
	for1(i, T){
		int memory[105] = {0};
		cin >> s;
		int point = 0;
		forn(i, s.size()){
			if(s[i] == '+'){
				memory[point]++;
				if(memory[point] == 256) memory[point] = 0;
			} else if(s[i] == '-'){
				memory[point]--;
				if(memory[point] == -1) memory[point] = 255;			
			} else if(s[i] == '>'){
				point++;
				if(point == 100) point = 0;
			} else if(s[i] == '<'){
				point--;
				if(point == -1) point = 99;
			}
		}
		printf("Case %d: ", i);
		forn(i, 100){
			if(i > 0) printf(" ");
			printf("%02X", memory[i]);
		} printf("\n");
	}
    return 0;
}
