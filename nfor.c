#include<stdio.h>
#include<conio.h>
void main()
{

    int i=1,sum=0;
    int n;
    scanf("\n %d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
}
printf("\n the sum of %d numbers is :%d",n,sum);
}
