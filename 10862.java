import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N, T, M, K;
        BigInteger[] fibo = new BigInteger[4005];
        fibo[2] = BigInteger.valueOf(1); fibo[1] = BigInteger.valueOf(1);
        for(int i = 3; i <= 4000; i++){
            fibo[i] = fibo[i-2].add(fibo[i-1]);
            //System.out.println(fibo[i]);
        }
        while(true){
            N = sc.nextInt();
            if(N == 0) break;
            System.out.println(fibo[2*N]);
        }
        sc.close();
    }
}