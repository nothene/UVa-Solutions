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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, sum; string s, dummy; bool first = true;
    cin>>n;
    getline(cin, dummy);
    getline(cin, dummy);
    for(int i = 0; i < n; i++){
    	if(i > 0) printf("\n");
    	map<string, int> hash; sum = 0;
    	while(getline(cin, s)){
    		if(s.size() == 0) break;
    		hash[s]++; sum++;
		}
		for(map<string, int>::iterator it = hash.begin(); it != hash.end(); it++){
			printf("%s %.4f\n",it->ff.c_str(), (double)it->ss / (double)sum * 100.0);
		}
	}
    return 0;
}
