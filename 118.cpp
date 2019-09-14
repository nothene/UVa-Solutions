#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef pair<ii, string> iis;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define MP make_pair

int lost[100][100] = {0};
int step[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
char dir[] = "NESW";
map<char, int> dirnum;
map<int, char> numdir;

int main(){
    int x, y, a, b, p, d, e, f; char ins[300], face; bool ok;
    dirnum['N'] = 0;
    dirnum['E'] = 1;
    dirnum['S'] = 2;
    dirnum['W'] = 3;
    numdir[0] = 'N';
    numdir[1] = 'E';
    numdir[2] = 'S';
    numdir[3] = 'W';
    cin>>x>>y;
    while(cin>>a>>b>>face>>ins){
        ok = false;
        int len = strlen(ins);
        p = dirnum[face];
        for(int i = 0; i < len; i++){
            if(ins[i] == 'R'){
                if(p == 3) p = 0;
                else p++;
            } else if(ins[i] == 'L'){
                if(p == 0) p = 3;
                else p--;
            } else if(ins[i] == 'F'){
                a += step[p][0]; b += step[p][1];
                if(a > x || b > y || a < 0 || b < 0){
                    if(lost[a-step[p][0]][b-step[p][1]] != 1){
                        lost[a-step[p][0]][b-step[p][1]] = 1;
                        a -= step[p][0]; b -= step[p][1];
                        ok = true;
                        break;
                    } else{
                        a -= step[p][0]; b -= step[p][1];
                    }
                }
            }
        }
        cout<<a<<" "<<b<<" "<<numdir[p]; if(ok){cout<<" LOST\n";} else cout<<"\n";
    }
    return 0;
}