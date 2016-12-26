#include<stdio.h>
#include<conio.h>
void main()
{

    int num,count=0;
    scanf("\n %d",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("\n the no of digit is :%d",count);
        }
