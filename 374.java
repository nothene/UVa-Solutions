import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            BigInteger B = BigInteger.valueOf(sc.nextInt());
            BigInteger P = BigInteger.valueOf(sc.nextInt());
            BigInteger M = BigInteger.valueOf(sc.nextInt());
            System.out.println(B.modPow(P, M));
            if(sc.hasNext()) sc.nextLine();
        }
        sc.close();
    }
}