#include<stdio.h>
int product();
int main(){
    int multiplication=product();
    printf("multiplication = %d",multiplication);
    return 0;
}
int product(){
    int num1,num2,multiplication;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the first number: ");
    scanf("%d",&num2);
    multiplication=num1+num2;
    return multiplication;
}