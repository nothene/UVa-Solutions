#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int mon, rec, i, j = 0, k; float dp, cost, dep, cost2;
    while(scanf("%d %f %f %d", &mon, &dp, &cost, &rec), mon > 0){
        cost2 = cost;
        for(int i = 0; i < rec; i++){
            scanf("%d", &k, &dep);
            do{ cost2 = cost2 * dep; cost = cost - dp;
                if(cost2 < cost) { printf("%d month", j); break; }
                j++; 
            } while(j != k)
        }
    }
    return 0;
}