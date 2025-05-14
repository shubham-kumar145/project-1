/*
 12.Write a program to take two number from user and print count of number present
 between them
*/
#include<stdio.h>
int main(){
    int number1,number2,count=-1;
    printf("enter the first number: ");
    scanf("%d",&number1);
    printf("enter the second number: ");
    scanf("%d",&number2);
    while(number1<number2){
        count=count+1;
        number1=number1+1;
    }
    printf("count = %d",count);
    return 0;
}