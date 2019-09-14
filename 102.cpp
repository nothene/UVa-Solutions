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

int N, T;
int B[3], G[3], C[3];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> B[0] >> G[0] >> C[0] >> B[1] >> G[1] >> C[1] >> B[2] >> G[2] >> C[2]){
		int min = INF, sum = 0, flag, tsum;
		string bins[6] = {"GCB", "GBC", "CGB", "CBG", "BGC", "BCG"};
		{
			tsum = B[0] + C[0] + B[1] + G[1] + C[2] + G[2];
			if(tsum <= min) flag = 0, min = tsum;
		}
		{
			tsum = B[0] + C[0] + C[1] + G[1] + B[2] + G[2];
			if(tsum <= min) flag = 1, min = tsum;
		}
		{
			tsum = B[0] + G[0] + B[1] + C[1] + C[2] + G[2];
			if(tsum <= min) flag = 2, min = tsum;
		}
		{
			tsum = B[0] + G[0] + C[1] + G[1] + B[2] + C[2];
			if(tsum <= min) flag = 3, min = tsum;
		}
		{
			tsum = G[0] + C[0] + B[1] + C[1] + B[2] + G[2];
			if(tsum <= min) flag = 4, min = tsum;
		}
		{
			tsum = G[0] + C[0] + B[1] + G[1] + B[2] + C[2];
			if(tsum <= min) flag = 5, min = tsum;
		}
		cout << bins[flag] << " " << min << endl;
	}
    return 0;
}	
