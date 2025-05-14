/*
 15.Write a program to take two number from user and Find the sum of all odd number
 Present between them.
*/
#include<stdio.h>
int main(){
    int number1,number2,sum=0;
    printf("enter the first number: ");
    scanf("%d",&number1);
    printf("enter the second number: ");
    scanf("%d",&number2);
    while(number1<=number2){
        if(number1%2!=0){
            sum=sum+number1;
        }
        number1=number1+1;
    }
    printf("sum of all odd number: %d",sum);
    return 0;
}