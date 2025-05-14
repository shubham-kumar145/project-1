#include<stdio.h>
int main(){
    int num1,rem,first,last;
    printf("enter the number: ");
    scanf("%d",&num1);
    last=num1%10;
    while(num1>0){
        rem=num1%10;
        num1=num1/10;
    }
    first = rem;
    printf("first digit is %d\n",first);
    printf("last digit is %d",last);
    return 0;
}