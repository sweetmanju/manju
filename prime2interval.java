package guvi;
import java.util.Scanner;
class prime2interval {
	public static void main(String[] args)
	{
     Scanner sc=new Scanner(System.in);
     int range;
     int n;
     n=sc.nextInt();
     range=sc.nextInt();
     for(int num=n;num<=range;num++)
    	 {
    	 int prime=0;
    	 for(int i=2;i<num;i++)
            {
    		 if(num%i==0)
    		 {
    			prime=1; 
    	     }
            }
    		 if(prime==0)
    		 {
    			 System.out.println("prime number is: "+num);
    		 }
    	 }
}
}