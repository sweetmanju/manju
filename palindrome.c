#include<stdio.h>
#include<conio.h>
void main()
{
int n,reverse=0,remainder,original;
printf("\n enter the digit");
scanf("\n %d",&n);
original=n;
while(n!=0)
{
remainder=n%10;
reverse=reverse*10+remainder;
n/=10;
}
if(original==reverse)
printf("\n it ia a palindrome");
else
printf("\n it is not a palindrome");
}
