#include<stdio.h>
int factorial(int a);
int main(){
    int num1,num2;
    printf("enter the number: ");
    scanf("%d",&num1);
    num2=factorial(num1);
    printf("factorial = %d",num2);
    return 0;
}
int factorial(int a){
    int fact=1;
    while(a>1){
        fact=fact*a;
        a--;
    }
    return fact;
}