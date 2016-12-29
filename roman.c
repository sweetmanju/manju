#include<stdio.h>
#include<string.h>

int digitValue(char);

int main(){

    char roman_Num[1000];
    int m=0;
    long int num =0;

    printf("Enter any roman number (Valid digits are I, V, X, L, C, D, M):  \n");
    scanf("%s",roman_Num);

    while(roman_Num[m]){

         if(digitValue(roman_Num[m]) < 0){
             printf("Invalid roman digit : %c",roman_Num[m]);
             return 0;
         }

         if((strlen(roman_Num) -m) > 2){
             if(digitValue(roman_Num[m]) < digitValue(roman_Num[m+2])){
                 printf("Invalid roman number");
                 return 0;
             }
         }

         if(digitValue(roman_Num[m]) >= digitValue(roman_Num[m+1]))
             num = num + digitValue(roman_Num[m]);
         else{
             num = num + (digitValue(roman_Num[m+1]) - digitValue(roman_Num[m]));
             m++;
         }
         m++;
    }

    printf("Its decimal value is : %ld",num);

    return 0;

}

int digitValue(char c){

    int value=0;

    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case '\0': value = 0; break;
         default: value = -1;
    }

    return value;
}
