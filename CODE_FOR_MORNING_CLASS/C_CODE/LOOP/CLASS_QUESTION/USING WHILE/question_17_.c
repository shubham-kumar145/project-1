/*
17.Write a program to take a number from user and print the table of that number .
 */
#include<stdio.h>
int main(){
    int base,power=1,sum=0;
    printf("enter the number: ");
    scanf("%d",&base);
    while(power<=10){
        sum=base*power;
        printf("%d * %d = %d\n",base,power,sum);
        power=power+1;
    }
    return 0;
}