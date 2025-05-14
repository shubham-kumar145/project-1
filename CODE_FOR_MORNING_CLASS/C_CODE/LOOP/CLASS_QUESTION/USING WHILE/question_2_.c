/*
2. Write a program to take a number from user and print from 1 to till user’s input.
*/
#include<stdio.h>
int main(){
    int number,sp=1;
    printf("enter the number: ");
    scanf("%d",&number);
    while(sp <= number){
        printf("%d ",sp);
        sp=sp+1;
    }
    return 0;
}