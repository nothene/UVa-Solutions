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
            BigDecimal ans = BigDecimal.ZERO;
            BigDecimal n;
            while(true){
                n = sc.nextBigDecimal();
                if(n.equals(BigDecimal.ZERO)){
                    break;
                }
                ans = ans.add(n);
            }
            System.out.println(ans.stripTrailingZeros().toPlainString());
        }
        sc.close();
    }
}