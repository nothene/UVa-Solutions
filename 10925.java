import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int caseNo = 1, N, F;
        while(true){
            N = sc.nextInt();
            F = sc.nextInt();
            if(N == 0 && F == 0) break;
            BigInteger sum = BigInteger.ZERO;
            for(int i = 0; i < N; i++){
                BigInteger num = sc.nextBigInteger();
                sum = sum.add(num);
            }
            System.out.println("Bill #" + caseNo + " costs " + sum + ": each friend should pay " + sum.divide(BigInteger.valueOf(F)) + "\n");
            caseNo++;
        }
        sc.close();
    }
}