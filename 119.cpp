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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		if(caseNo > 1) cout << endl;
		vector<string> S(N); map<string, int> worth;
		forn(i, N){
			cin >> S[i];
		}
		string s, t; int money, person;
		forn(i, N){
			cin >> s >> money >> person;
			if(person > 0){
				worth[s] += money % person, worth[s] -= money;
				forn(j, person){
					string name;
					cin >> name;
					worth[name] += money / person;
				}				
			}
		}
		forn(i, N){
			cout << S[i] << " " << worth[S[i]] << endl;
		}
		caseNo++;
	}
    return 0;
}
