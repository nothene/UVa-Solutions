import java.io.*;
import java.math.BigInteger;
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in); int N;
        BigInteger v[] = new BigInteger[1005];
        v[0] = BigInteger.valueOf(1);
        v[1] = BigInteger.valueOf(1);
        for(int i = 2; i < 1002; i++){
            v[i] = v[i-1].add(v[i-2]);
        }
        while(sc.hasNext()){
            N = sc.nextInt();
            System.out.println(v[N+1]);
        }
        sc.close();
    }
}