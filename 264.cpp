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

using namespace std;

int grid[3200][3200];

int main(){
    ll n;
    while(cin>>n){
        bool isLeft = false;
        int term = 1;
        int limit = 1;
        int cantor[2] = {1, 1};
        int i = 1;
        while(term < n){
            if(isLeft){
                while(cantor[1] > 1 && i < limit && term < n){
                    term++;
                    i++;
                    cantor[1]--;
                    cantor[0]++;
                    //printf("term %d :%d/%d\n", term, cantor[0], cantor[1]);
                    //cout<<"trig1\n";
                }
                if(term < n){
                    cantor[0]++;
                    term++;
                    //printf("term %d :%d/%d\n", term, cantor[0], cantor[1]);
                } else{
                    break;
                }
                isLeft = false;
            } else{
                while(cantor[0] > 1 && i < limit && term < n){
                    term++;
                    i++;
                    cantor[0]--;
                    cantor[1]++;
                    //printf("term %d :%d/%d\n", term, cantor[0], cantor[1]);
                    //cout<<"trig2\n";
                }
                if(term < n){
                    cantor[1]++;
                    term++;
                    //printf("term %d :%d/%d\n", term, cantor[0], cantor[1]);
                } else{
                    break;
                }
                isLeft = true;
            }
            i = 1;
            limit++;
        }
        printf("TERM %d IS %d/%d\n", n, cantor[0], cantor[1]);
    }
    return 0;
}
