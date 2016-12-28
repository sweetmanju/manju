#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    char inS[20];
    printf("Enter a String for Integer conversion \n");
    gets(inS);

    printf("Integer: %d \n", atoi(inS));
    getch();
    return 0;
}
