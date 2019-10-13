import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N, T, M, K;
        BigInteger pascal[][] = new BigInteger[300][300];
        pascal[1][1] = BigInteger.valueOf(1);
        for(int i = 0; i <= 10; i++){
            pascal[i][0] = BigInteger.ZERO;
        }
        System.out.println(1);
        for(int i = 2; i <= 204; i++){
            for(int j = 1; j <= i; j++){
                if(j > 1) System.out.print(" ");
                pascal[i][j] = pascal[i-1][j-1].add(pascal[i-1][j]);
                System.out.print(pascal[i][j]);
            }
        }
        sc.close();
    }
}