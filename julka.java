import java.util.Scanner;
import java.math.BigInteger;
 
 class julka {
	 public static void main(String[] args){
Scanner in =new Scanner(System.in);
	int t=10;
	while(t--!=0)
	{
     BigInteger   total=in.nextBigInteger();
	  BigInteger  excess=in.nextBigInteger();
	 BigInteger  sub=total.subtract(excess);
	BigInteger ad=total.add(excess);
	BigInteger klau=ad.divide(BigInteger.valueOf(2));
	BigInteger nat=sub.divide(BigInteger.valueOf(2));
		
 
                   System.out.println(klau);
		
 
                    System.out.println(nat);
                    
                    
	}
}
}