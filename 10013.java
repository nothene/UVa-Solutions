import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N, T, M, K; String s;
        T = sc.nextInt();
        for(int i = 0; i < T; i++){
            if(i > 0) System.out.println();
            N = sc.nextInt();
            String a = ""; String b = "";
            for(int j = 0; j < N; j++){
                s = sc.next();
                a += s;
                s = sc.next();
                b += s;                
            }
            BigInteger X = new BigInteger(a);
            BigInteger Y = new BigInteger(b);
            System.out.println(X.multiply(Y));
        }
        sc.close();
    }
}