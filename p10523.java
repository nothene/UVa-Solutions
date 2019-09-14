import java.util.*;
import java.lang.*;
import java.math.BigInteger;

class p10523{
	public static void main(String[] args){
		int N, A; Scanner in = new Scanner(System.in);
		while(in.hasNextInt()){
			N = Integer.parseInt(in.next());
			A = Integer.parseInt(in.next());
            BigInteger res = BigInteger.ZERO;
			for(int i = 1; i <= N; i++){
                BigInteger tmp = BigInteger.ONE;
                for(int j = 0; j < i; j++){
                    tmp = tmp.multiply(BigInteger.valueOf(A));
                }
				tmp = tmp.multiply(BigInteger.valueOf(i));
				res = res.add(tmp);
			}
			System.out.println(res);
		}
		in.close();
	}
}