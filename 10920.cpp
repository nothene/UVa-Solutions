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

int N, T, M, K, SZ, P, pos;
int x, y, cur, mult;

void up(){
	y += mult; cur += mult;
}

void left(){
	x -= mult; cur += mult;
}

void down(){
	y -= mult; cur += mult;
}

void right(){
	x += mult; cur += mult;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> SZ >> pos){
		if(SZ == 0 && pos == 0) break;
		cur = 1, x = ceil(SZ/2.0), y = ceil(SZ/2.0), mult = 1;
		//cout << x << " " << y << endl;
		bool first = true;
		while(1){
			up();
			//cout << x << " " << y << endl;
			if(cur >= pos){
				y -= abs(pos-cur);
				break;	
			}
			left();
			//cout << x << " " << y << endl;
			if(cur >= pos){
				x += abs(pos-cur);
				break;	
			}
			mult++;
			down();
			//cout << x << " " << y << endl;
			if(cur >= pos){
				y += abs(pos-cur);
				break;	
			}			
			right();
			//cout << x << " " << y << endl;
			if(cur >= pos){
				x -= abs(pos-cur);
				break;	
			}
			mult++;				
		}
		cout << "Line = " << y << ", column = " << x << ".\n";
	}
    return 0;
}
