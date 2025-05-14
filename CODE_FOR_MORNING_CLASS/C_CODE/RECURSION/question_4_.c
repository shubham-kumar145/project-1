#include<stdio.h>
int fact(int a);
int main(){
    int number,factorial;
    printf("enter the number: ");
    scanf("%d",&number);
    factorial=fact(number);
    printf("factorial = %d",factorial);
    return 0;
}
int fact(int num1){
    if(num1==1){
        return 1;
    }
    int add = num1 * fact(num1-1);
    return add;
}