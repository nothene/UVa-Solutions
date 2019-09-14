import java.util.*;
import java.lang.*;
import java.math.BigInteger; 

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		BigInteger N, A, tmp, ans;
		while(sc.hasNext()){
			N = new BigInteger(sc.next());
			A = new BigInteger(sc.next());
			ans = BigInteger.ZERO;
			int n = N.intValue();
			tmp = BigInteger.ONE;
			for(int i = 1; i <= n; i++){
				tmp = tmp.multiply(A);
				ans = ans.add(tmp.multiply(new BigInteger(Integer.toString(i))));
			}
			System.out.println(ans);
		}
	}
}