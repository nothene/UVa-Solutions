#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, a, b, trade, sum = 0, count = 0; char name[15];
    map<char, ii> city;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &a); for(int i = 0; i < a; i++) { scanf("%*s %s %d", &name, &trade); city[name] = trade; }
        scanf("%d", &b); for(int i = 0; i < a; i++) { scanf("%*s %s %d", &name, &trade); }
        printf("%d %d", sum, count);
    }
    return 0;
}