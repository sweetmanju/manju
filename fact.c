#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,fact=1;
    scanf("\n %d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("\n the factorial is %d",fact);
}
