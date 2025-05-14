#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    while(num1<=num2){
        if(num1%2==0){
            printf("%d.coding  ",num1);
        }
        else
        {
            printf("%d.age  ",num1);
        }
        num1++;
    }
    return 0;
}