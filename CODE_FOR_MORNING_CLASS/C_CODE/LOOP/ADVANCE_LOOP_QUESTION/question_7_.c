#include<stdio.h>
int main(){
    int num1,num2,num3,reverse,rem;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    printf("palindrome number ");
    while(num1<=num2){
        reverse=0;
        num3=num1;
        while(num3>0){
            rem=num3%10;
            num3=num3/10;
            reverse=(reverse*10)+rem;
        }
        if(reverse==num1){
            printf(" %d ",num1);
        }
        num1++;
    }
    return 0;
}