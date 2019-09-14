#include <bits/stdc++.h>

using namespace std;

int main(){
	int N, T;
    printf("PERFECTION OUTPUT\n");
    while(1){
    	scanf("%d", &N);
    	if(N == 0){ printf("END OF OUTPUT\n"); break; }
		int sum = 0;
    	for(int i = 1; i < N; i++)
    		if(N % i == 0) sum += i;
		if(sum == N) printf("%5d  PERFECT\n", N);
    	else if(sum < N) printf("%5d  DEFICIENT\n", N);
    	else if(sum > N) printf("%5d  ABUNDANT\n", N);
	}
    return 0;  
}                        
