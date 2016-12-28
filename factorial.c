#include<stdio.h>
#include<conio.h>
void main()
{
    int m,n,fact=1;
    scanf("\n %d",&n);
    for(m=1;m<=n;m++)
    {
        fact*=m;
    }
    printf("\n the factorial is %d",fact);
}
