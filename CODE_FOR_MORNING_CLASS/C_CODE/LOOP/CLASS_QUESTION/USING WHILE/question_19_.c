/*
 19.Write a program to take a number from user and reverse that number .
*/
#include<stdio.h>
int main(){
    int number,reverse=0,rem;
    printf("enter the number: ");
    scanf("%d",&number);
    while(number>0){
        rem=number%10;
        number=number/10;
        reverse=(reverse*10)+rem;
    }
    printf("reverse number: %d",reverse);
    return 0;
}