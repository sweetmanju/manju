#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,odd;
    printf("\n the interval is :",i,j);
     scanf("\n %d\t%d",&i,&j);
    for(i;i<j;i++)
    {
        if(i%2!=0)
            printf("\n odd:%d",i);
    }
}
