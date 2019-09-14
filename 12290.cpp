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

int N, T, M, K;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> M >> K){
		if(N == 0 && M == 0 && K == 0) break;
		int cnt = 0, person = 0; bool up = true;
		for(int i = 1; ; i++){
			if(up){
				person++;
			} else person--;
			bool ok = false; int tmp = i;
			while(tmp){
				if(tmp % 10 == 7) ok = true;
				tmp /= 10;
			}
			if(i % 7 == 0) ok = true;
			if(person == M && ok){
				cnt++;
			}
			if(cnt == K){
				cout << i << endl; break;
			}
			if(person == N) up = false;
			if(person == 1) up = true;
		}
		
	}
    return 0;
}
