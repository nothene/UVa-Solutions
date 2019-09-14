#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(ll (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(ll (i) = 1; (i) <= (n); (i)++)
#define BUG(x) cout<<x<<endl;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second

ll N, T, M, K, x, y;
ll xGrid[1000005];
ll yGrid[1000005];

void update(){
	xGrid[K] = x;
	yGrid[K] = y;
	K++;
}

void down(){
	y++; update();
}

void down_right(){
	x++; update();
}

void down_left(){
	x--; y++; update();
}

void up(){
	y--; update();
}

void up_left(){
	x--; update();
}

void up_right(){
	x++; y--; update();
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    xGrid[1] = 0; yGrid[1] = 0; K = 2;
    for(int i = 1; i <= 200; i++){
    	forn(j, i) down();
    	forn(j, i-1) down_left();
    	forn(j, i) up_left();
    	forn(j, i) up();
    	forn(j, i) up_right();
    	forn(j, i) down_right();
	}
	while(cin >> N){
		cout << xGrid[N] << " " << yGrid[N] << endl;
	}
    return 0;
}
