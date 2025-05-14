/*
 16.Write a program to take two number from user one as a base ,second as a power
 calculate and print.
*/
#include<stdio.h>
int main(){
    int base,power,sum=1;
    printf("enter the base: ");
    scanf("%d",&base);
    printf("enter the power: ");
    scanf("%d",&power);
    while(power>0){
        sum=sum*base;
        power=power-1;
    }
    printf("sum = %d",sum);
    return 0;
}