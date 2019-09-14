import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T-- > 0){
            BigInteger p = sc.nextBigInteger();
            sc.next();
            BigInteger q = sc.nextBigInteger();
            BigInteger gcd_pq = p.gcd(q);
            System.out.println(p.divide(gcd_pq) + " / " + q.divide(gcd_pq));
        }
        sc.close();
    }
}