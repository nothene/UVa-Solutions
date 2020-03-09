#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s; int first = 1;
    while(getline(cin, s)){
    	for(int i = 0; i < s.size(); i++){
    		if(s[i] == '"'){
    			if(first == 1) cout << "``";
    			else cout << "''";
    			first = (first + 1) % 2;
			} else cout << s[i];
		} cout << endl;
	}
}
