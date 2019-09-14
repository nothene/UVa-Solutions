#include <iostream>

using namespace std;

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, cur, bef, temp; 
    while( scanf("%d", &n) != EOF ){
        bool flag[3005] = {false}, ok = true;
        scanf("%d", &bef);
        for(int i = 1; i < n; i++){
            scanf("%d", &cur);
            flag[abs(cur-bef)] = true;
            bef = cur;
        }
        for(int i = 1; i <= (n - 1); i++){
            if(!flag[i]){ ok = false; break; }
        }

        if(ok){ printf("Jolly\n"); }
        else{ printf("Not jolly\n"); }
    }
    return 0;
}