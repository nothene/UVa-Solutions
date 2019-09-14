#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define INF 1000000000
#define MP make_pair
#define PB push_back

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    string a, b;
    while(getline(cin, a) && getline(cin, b)){
        int na[300] = {0};
        int nb[300] = {0};
        int len_a = a.size();
        for(int i = 0; i < len_a; i++){
            na[a[i]]++;
        }
        int len_b = b.size();
        for(int j = 0; j < len_b; j++){
            nb[b[j]]++;
        }
        printf("\n");
    }
    return 0;
}