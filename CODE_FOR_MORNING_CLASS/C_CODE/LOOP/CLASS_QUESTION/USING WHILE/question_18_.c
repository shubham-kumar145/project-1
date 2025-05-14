/*
18.Write a program to take a number from user and count the digit present in that number .
*/
#include<stdio.h>
int main(){
    int number,count=0;
    printf("enter the number: ");
    scanf("%d",&number);
    while(number>0){
        count=count+1;
        number=number/10;
    }
    printf("digit count = %d",count);
    return 0;
}