import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N, T, M, K;
        BigInteger[] fact = new BigInteger[305];
        BigInteger[] cat = new BigInteger[305];
        fact[0] = BigInteger.valueOf(1);
        cat[0] = BigInteger.valueOf(1);
        for(int i = 1; i <= 300; i++){
            cat[i] = cat[i-1].multiply(BigInteger.valueOf((long)((2.0*i * (2.0*i-1)) / ((i+1.0) * i))));
            fact[i] = BigInteger.valueOf(i).multiply(fact[i-1]);
            System.out.println(cat[i]);
        }
        while(true){
            N = sc.nextInt();
            if(N == 0) break;
            System.out.println(fact[N] + " " + (cat[N]));
            System.out.println(fact[N].multiply(cat[N]));
        }
        sc.close();
    }
}