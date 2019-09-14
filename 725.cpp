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
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, c, temp; bool first = true;
    while(cin >> n){
        if(n == 0) break;
        if(first) first = false; else cout << endl;
        c = 0;
        for(int fghij = 1234; fghij <= 98765 / n; fghij++){
            bitset<10> flag; if(fghij < 10000) flag[0] = 1;
            int abcde = fghij * n; 
            temp = fghij;
            while(temp){ flag[temp%10] = 1; temp /= 10; }
            temp = fghij * n;
            while(temp){ flag[temp%10] = 1; temp /= 10; }
            if(flag.all()){ cout << abcde << " / " << (fghij < 10000 ? "0" : "") << fghij << " = " << n << endl; c++; }
        }
        if(c == 0) cout<<"There are no solutions for "<<n<<".\n";
    }
    return 0;
}
