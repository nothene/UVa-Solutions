import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger N;
        while(sc.hasNextBigInteger()){
            N = sc.nextBigInteger();
            int fact = N.intValue();
            if(N.equals(BigInteger.ZERO)) System.out.println("0!\n1");
            else{
                for(int i = N.intValue()-1; i > 1; i--){
                    N = N.multiply(BigInteger.valueOf(i));
                }
                System.out.println(fact + "!\n" + N);
            }
        }
        sc.close();
    }
}