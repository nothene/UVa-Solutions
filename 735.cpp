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
    set<int> st;
    for(int i = 0; i <= 20; i++){
    	st.insert(i);
    	st.insert(i*2);
    	st.insert(i*3);
	} st.insert(50);
	while(cin >> N){
		if(caseNo > 1) cout << "**********************************************************************\n";
		if(N <= 0){
			cout << "END OF OUTPUT\n";
			break;
		}
		set< set<int> > dart;
		for(set<int>::iterator a = st.begin(); a != st.end(); a++){
			for(set<int>::iterator b = st.begin(); b != st.end(); b++){
				for(set<int>::iterator c = st.begin(); c != st.end(); c++){
					if(*a + *b + *c == N){
						set<int> tmp; tmp.insert(*a); tmp.insert(*b); tmp.insert(*c);
						dart.insert(tmp);
					}
				}
			}
		}
		
		int comb = dart.size(), perm = 0;
		for(set< set<int> >::iterator it = dart.begin(); it != dart.end(); it++){
			if(it->size() == 1){
				perm++;
			} else if(it->size() == 2){
				perm += 3;
			} else perm += 6;
		}
		
		if(dart.size() == 0){
			cout << "THE SCORE OF " << N << " CANNOT BE MADE WITH THREE DARTS.\n";
		} else{
			cout << "NUMBER OF COMBINATIONS THAT SCORES " << N << " IS " << comb << ".\n";
			cout << "NUMBER OF PERMUTATIONS THAT SCORES " << N << " IS " << perm << ".\n";
		}
		caseNo++;
	}
    return 0;
}
