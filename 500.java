import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger N;
        while(true){
            N = sc.nextBigInteger();
            int fact = N.intValue();
            for(int i = N.intValue()-1; i > 1; i--){
                N = N.multiply(BigInteger.valueOf(i));
            }
            //System.out.println(N);
            if(N.equals(BigInteger.ZERO)) break;
            System.out.println(fact + "! --");
            int arr[] = new int[10];
            while(!N.equals(BigInteger.ZERO)){
                int n = (N.mod(BigInteger.valueOf(10))).intValue();
                arr[n] += 1;
                N = N.divide(BigInteger.valueOf(10));
            }
            for(int i = 0; i < 10; i++){
                if(i != 0 && i != 5) System.out.print("    ");
                System.out.printf("(%d)%5d", i, arr[i]);
                if(i == 4) System.out.println();
            }
            System.out.println();
        }
        sc.close();
    }
}