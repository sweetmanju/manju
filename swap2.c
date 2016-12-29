#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
     char ch[20],tmp;
     int m,v;
     printf("\nEnter a string : ");
     scanf("%s",ch);
     printf("\n\nOriginal String     : %s",ch);
     for(m=0;m<strlen(ch);m=m+2){
     tmp = ch[m];
     ch[m] = ch[m+1];
     ch[m+1] = tmp;
     }
     printf("\nAfter Swap String      : %s",ch);
     getch();
}

