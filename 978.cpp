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

int N, T, M, K, B, SG, SB, power;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> N;
	forn(_, N){
		multiset< int, greater<int> > blue, green;
		if(_ > 0) cout << endl;
		cin >> B >> SG >> SB;
		forn(_, SG){
			cin >> power; green.insert(power);
		}
		forn(_, SB){
			cin >> power; blue.insert(power);
		}
		while(!blue.empty() && !green.empty()){
			vi Blue, Green;
			forn(_, B){
				if(!blue.empty() && !green.empty()){
					Blue.pb(*(blue.begin())); Green.pb(*(green.begin()));
					blue.erase(blue.begin()); green.erase(green.begin());
				} else break;
			}
			forn(i, Blue.size()){
				int a = Blue[i]-Green[i], b = Green[i]-Blue[i];
				if(a > 0) blue.insert(a);
				if(b > 0) green.insert(b);
			}
		}
		if(blue.empty() && green.empty()) cout << "green and blue died\n";
		else if(!blue.empty()){
			cout << "blue wins\n";
			for(multiset< int, greater<int> >::iterator it = blue.begin(); it != blue.end(); it++){
				cout << *it << endl;
			}
		} 
		else{
			cout << "green wins\n";	
			for(multiset< int, greater<int> >::iterator it = green.begin(); it != green.end(); it++){
				cout << *it << endl;
			}
		} 
	}
    return 0;
}
