import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N, T, M, K, D;
        while(true){
            N = sc.nextInt();
            D = sc.nextInt();
            if(N == 0 && D == 0) break;
            System.out.println(BigInteger.valueOf(N).pow(D));
        }
        sc.close();
    }
}