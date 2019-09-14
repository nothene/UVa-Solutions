#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, a, b;
    scanf("%d", &n);
    while(n--){ scanf("%d %d", &a, &b); a > b ? printf(">\n") : a < b ? printf("<\n") : printf("=\n"); }    
    return 0;
}