/*
 20.Write a program to take a number from user and check that number is prime or not .
*/
#include<stdio.h>
int main(){
    int number1,number2,count=0;
    printf("enter the number: ");
    scanf("%d",&number1);
    number2=number1/2;
    while(number2>1){
        if(number1%number2==0){
            count=count+1;
        }
        number2=number2-1;
    }
    if(count>0){
        printf("%d is not prime",number1);
    }
    else{
        printf("%d is prime",number1);
    }
    return 0;
}