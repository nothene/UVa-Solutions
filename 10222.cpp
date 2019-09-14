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

int N, T;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    map<char, char> key;
    key['\n'] = '\n';
    key[' '] = ' ';
    key['e'] = 'q';
    key['d'] = 'a';
    key['c'] = 'z';
    key['r'] = 'w';
    key['f'] = 's';
    key['v'] = 'x';
    key['t'] = 'e';
    key['g'] = 'd';
    key['b'] = 'c';
    key['y'] = 'r';
    key['h'] = 'f';
    key['n'] = 'v';
    key['u'] = 't';
    key['j'] = 'g';
    key['m'] = 'b';
    key['i'] = 'y';
    key['k'] = 'h';
    key[','] = 'n';
    key['o'] = 'u';
	key['l'] = 'j';
	key['.'] = 'm';
	key['p'] = 'i';
	key[';'] = 'k';
	key['/'] = ',';
	key['['] = 'o';
	key['\''] = 'l';
	key[']'] = 'p';
	key['\\'] = '[';
	char s[10010];
	fgets(s, 10010, stdin);
	forn(i, strlen(s)){
		printf("%c", key[tolower(s[i])]);
	}
    return 0;
}
