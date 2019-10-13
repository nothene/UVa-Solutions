import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N, T, M, K;
        while(sc.hasNext()){
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            int ans = 0;
            while(!b.equals(BigInteger.ONE)){
                b = b.divide(a);
                System.out.println(b);
                ans++;
            }
            System.out.println(ans);
        }
        sc.close();
    }
}