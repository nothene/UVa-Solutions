#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define INF 1000000000
#define MP make_pair

int main(){
    unsigned long long n, k, m;
    cin>>n;
    while(n--){
        double hash[300] = {0};
        cin>>k;
        for(int i = 0; i < k; i++){
            string let; int in;
            cin>>let>>in; 
            hash[let[0]] = in;
        }
        cin>>m;
        double cost = 0;
        cin.ignore();
        for(int j = 0; j < m; j++){
            string art;
            getline(cin, art);
            int len = art.size();
            for(int k = 0; k < len; k++){
                cost += hash[art[k]];
            }
        }
        printf("%.2lf$\n", cost/100.0);
    }
    return 0;
}