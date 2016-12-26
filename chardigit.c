#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    scanf("\n %c",&c);
    if(isalpha(c)>0)
        printf("\n it is a character");
    else
        printf("\n it is a digit");
}



