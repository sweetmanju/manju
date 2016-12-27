#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i=2,flag=0;
    scanf("\n %d",&num);
    while(i<sqrt(num))
    {
      if(num%i==0)
      {
          flag=1;
          break;
      }
      i++;
    }
    if(flag==0)
     printf("\n it is a prime number");
     else
   printf("\n it is not a prime number");
}
