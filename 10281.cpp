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

double N, T, M, K, H, S, V, prev_h = 0, prev_s = 0, prev_m = 0, dist = 0, prev_v = 0;

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    char s[20]; bool first = true;
	while(gets(s) != NULL){
		if(strlen(s) > 8){
			sscanf(s, "%lf:%lf:%lf %lf", &H, &M, &S, &V);	
		} else{
			sscanf(s, "%lf:%lf:%lf", &H, &M, &S);
		}
		//cout << (H-prev_h) << " " << (H-prev_h) << " " << (H-prev_h) << endl;
		dist += (H-prev_h)*prev_v + (M-prev_m)*prev_v/60.0 + (S-prev_s)*prev_v/3600.0;
		if(strlen(s) < 9) printf("%s %.2lf km\n", s, dist);
		prev_h = H;
		prev_m = M;
		prev_s = S;
		prev_v = V;
	}
    return 0;
}
