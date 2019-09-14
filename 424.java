import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger ans = BigInteger.ZERO;
        BigInteger n;
        while(true){
            n = sc.nextBigInteger();
            if(n.equals(BigInteger.ZERO)) break;
            ans = ans.add(n);           
        }
        System.out.println(ans);
        sc.close();
    }
}