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

int N, T, M, K, num;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> num){
		if(num == 0){
			cin >> num; cin >> num;	break;
		}
		vi V; V.pb(num);
		int hour, min, sec, start = INF, time;
		while(cin >> num){
			if(num == 0) break;
			if(start > num) start = num;
			V.pb(num);
		}
		bool ok;
		for(time = start; time <= 18000; time++){
			ok = true;
			for(int i = 0; i < V.size() && ok; i++){
				if(time % (V[i]*2) >= V[i]-5){
					ok = false;
				}
			}
			if(ok) break;
		}
		hour = time / 3600; time -= time / 3600 * 3600;
		min = time / 60; time -= time / 60 * 60;
		sec = time;
		if(!ok) printf("Signals fail to synchronise in 5 hours\n");
		else printf("%02d:%02d:%02d\n", hour, min, sec);
	}
    return 0;
}
