#include <iostream>

using namespace std;

int main(){
    float H, M, ans;
    while(scanf("%f:%f", &H, &M))    {
        if(H == 0 && M == 0) return 0;
        ans = abs(0.5 * (60 * H - 11 * M));
        if(ans > 180) ans = 360.0 - ans;
        printf("%.3f\n", ans);
    }
    return 0;
}