import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N, T, M, K;
        BigInteger[] fact = new BigInteger[500];
        fact[0] = BigInteger.valueOf(1);
        for(int i = 1; i <= 2147483647; i++){
            fact[i] = BigInteger.valueOf(i).multiply(fact[i-1]);
        }
        while(sc.hasNextInt()){
            N = sc.nextInt();
            K = sc.nextInt();
            System.out.println((fact[N].divide(fact[K].multiply(fact[N-K]))).toString().length());
        }
        sc.close();
    }
}