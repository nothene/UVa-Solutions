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
        for(int i = 0; i < a.size(); i++){
            if(a[i] != 32) na[a[i]]++;
        }
        int len_b = b.size();
        for(int j = 0; j < b.size(); j++){
            if(b[j] != 32) nb[b[j]]++;
        }
        for(char i = 'a'; i <= 'z'; i++){
        	while(na[i] && nb[i]){
				printf("%c", i);
				na[i]--; nb[i]--;
			}
		}
        printf("\n");
    }
    return 0;
}
