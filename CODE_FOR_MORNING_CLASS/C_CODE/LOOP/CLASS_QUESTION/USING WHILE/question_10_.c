/*
 10.Write a program to take two number from user and .Find even number between them.
*/
#include<stdio.h>
int main(){
    int number1,number2;
    printf("enter the first number: ");
    scanf("%d",&number1);
    printf("enter the second number: ");
    scanf("%d",&number2);
    printf("even number = ");
    while(number1<=number2){
        if(number1%2==0){
            printf("%d,",number1);
        }
        number1=number1+1;
    }
    return 0;
}