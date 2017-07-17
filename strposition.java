package project;
import java.util.Scanner;
public class guvistr {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String a;
		String b;
		a=sc.next();
		b=sc.next();
		int len1=a.length();
		int len2=b.length();
		if(len1==len2)
		{
			System.out.println(""+a+b);
		}
		else if(len1>len2)
		{
			int r=len1-len2;
			String ans=a.substring(r);
			System.out.println(""+ans+b);
		}
		else
		{
			int s=len2-len1;
			String ans1=b.substring(s);
			System.out.println(""+ans1+a);
		}
		}
		

	}

