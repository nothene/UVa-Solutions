import java.io.*;
import java.util.*;
import java.math.BigDecimal;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N, T, M, K;
        T = sc.nextInt();
        for(int i = 0; i < T; i++){
            BigDecimal a = sc.nextBigDecimal();
            BigDecimal b = sc.nextBigDecimal();
            String s = a.add(b).stripTrailingZeros().toString();
            if(s.contains(".")){
                System.out.println(s);
            } else System.out.println(s + ".0");
        }
        sc.close();
    }
}