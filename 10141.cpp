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
string s, t;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> M){
		if(N == 0 && M == 0) break;
		if(caseNo > 1) cout << "\n";
		cin.ignore();
		forn(i, N){
			getline(cin, s);
		}
		string brand; double price = INF; int part = 0;
		string cur_brand; double cur_price = INF; int cur_part = 0;
		forn(i, M){
			getline(cin, cur_brand);
			cin >> cur_price >> cur_part;
			cin.ignore();
			forn(j, cur_part){
				getline(cin, s);
			}
			if(cur_part > part || (cur_part == part && cur_price < price)){
				brand = cur_brand;
				price = cur_price;
				part = cur_part;
			}
		}
		cout << "RFP #" << caseNo << "\n" << brand << "\n";
		caseNo++;
	}
    return 0;
}
