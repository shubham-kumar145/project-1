#include<stdio.h>
int quotient(int a,int b);
int remainder1(int a,int b);
int main(){
    int num1, num2, quo,rem;
    printf("enter the first number: ");
    scanf("%d", &num1);
    printf("enter the second number: ");
    scanf("%d", &num2);
    quo = quotient(num1, num2);
    rem = remainder1(num1, num2);
    printf("quotient = %d\n",quo);
    printf("remainder = %d\n",rem);
    return 0;
}
int quotient(int a,int b){
    int quo=a/b;
    return quo;
}
int remainder1(int a,int b){
    int rem=a%b;
    return rem;
}
