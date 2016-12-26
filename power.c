#include<stdio.h>
#include<conio.h>
void main()
{

    int base,exponent,count,value=1;
    scanf("\n %d %d",&base,&exponent);
    for(count=0;count<exponent;count++)
    {
        value=value*base;
    }
    printf("\n %d^%d=%d",base,exponent,value);


}
