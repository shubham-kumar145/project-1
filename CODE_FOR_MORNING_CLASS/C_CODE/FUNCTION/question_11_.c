#include<stdio.h>
void reverse(int a);
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    reverse(number);
    return 0;
}
void reverse(int num1){
    int rem,rev;
    while(num1>0){
        rem=num1%10;
        num1=num1/10;
        rev=(rev*10)+rem;
    }
    printf("reverse = %d",rev);
}