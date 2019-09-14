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

int ans, temp;
int track[50] = {0};

void backtrack(){

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m, in;
    while(cin>>n){
        cin>>m;
        forn(i, m){ cin>>in; track[i] = in; }

    } 
    return 0;
}