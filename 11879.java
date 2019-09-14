import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger n;
        while(sc.hasNext()){
            n = sc.nextBigInteger();
            if(n.compareTo(BigInteger.ZERO) == 0) break;
            if((n.modPow(BigInteger.ONE, BigInteger.valueOf(17))).compareTo(BigInteger.ZERO) == 0)
                System.out.println("1");
            else System.out.println("0");
        }
        sc.close();
    }
}