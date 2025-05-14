/*
 22.Write a program to take a number from user and check that number is palindrome or not .
*/
#include<stdio.h>
int main(){
    int number1,number2,reverse,rem;
    printf("enter the number: ");
    scanf("%d",&number1);
    number2=number1;
    while(number1>0){
        rem=number1%10;
        reverse=(reverse*10)+rem;
        number1=number1/10;
    }
    if(reverse==number2){
        printf("%d is palindrome",number2);
    }
    else{
        printf("%d is not palindrome",number2);
    }
    return 0;
}