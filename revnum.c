#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0;
printf("\n enter the num:");
scanf("\n %d",&n);
while(n!=0)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
printf("\n the reversed num is:%d",rev);
}
