#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    scanf("\n %d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
        printf("\n %d is big",a);
    if((b>a)&&(b>c))
        printf("\n %d is big",b);
    else
        printf("\n %d is big",c);
}
