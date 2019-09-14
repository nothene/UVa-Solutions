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

int N, T, a, b;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    char s[100];
	fgets(s, 100, stdin);
	while(fgets(s, 100, stdin)){
		if(strncmp(s, "___________", 11) == 0) break;
		int bit = 0, power = 0; 
		for(int i = 9; i > 0; i--){
			if(s[i] == 'o') bit += pow(2, power), power++;
			if(s[i] == ' ') power++;
		}
		printf("%c", bit);
	}
    return 0;
}
