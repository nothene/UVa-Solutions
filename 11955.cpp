#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define pb push_back
#define ff first
#define ss second

int N, T, M, K, caseNo = 1;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll pascal[100][100] = {0};
    pascal[1][1] = 1;
    for(int i = 2; i <= 55; i++){
    	for(int j = 1; j <= i; j++){
			pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
		}
	}
	cin >> T;
	forn(_, T){
		string first = "", second = "", power = "", s;
		cin >> s;
		int i = 1, up;
		while(s[i] != '+'){
			first += s[i];
			i++;
		}
		i++;
		while(s[i] != ')'){
			second += s[i];
			i++;
		}
		i += 2;
		power += s[i];
		if(i < s.size()) power += s[i+1];
		up = stoi(power);
		cout << "Case " << caseNo << ": ";
		int a = up, b = 0;
		if(up == 1){
			cout << first << "+" << second << endl;
			caseNo++; continue;
		}
		for(int i = 1; i <= up+1; i++){
			if(i > 1) cout << "+";
   			if(pascal[up+1][i] > 1) cout << pascal[up+1][i] << "*";
			if(a == 1) cout << first;
			else if(a > 1) cout << first << "^" << a;
			if(b == 1) cout << "*" << second;
			else if(b > 1 && b < up) cout << "*" << second << "^" << b;
			else if(b == up) cout << second << "^" << b;
			a--; b++;
		}
		cout << endl;
		caseNo++;
	}
    return 0;
}
