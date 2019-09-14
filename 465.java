import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger a, b; String cmd, sa, sb;
        BigInteger limit = BigInteger.valueOf(2147483647);
        while(sc.hasNextBigInteger()){
            sa = sc.next();
            cmd = sc.next();
            sb = sc.next();
            a = new BigInteger(sa);
            b = new BigInteger(sb);
            System.out.println(a + " " + cmd + " " + b);
            if(a.compareTo(limit) > 0) System.out.println("first number too big");
            if(b.compareTo(limit) > 0) System.out.println("second number too big");
            if(cmd.equals("+")) if((a.add(b)).compareTo(limit) > 0) System.out.println("result too big");
            if(cmd.equals("*")) if((a.multiply(b)).compareTo(limit) > 0) System.out.println("result too big");
        }
        sc.close();
    }
}