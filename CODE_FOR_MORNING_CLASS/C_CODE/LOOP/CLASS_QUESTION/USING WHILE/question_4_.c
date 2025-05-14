/*
 4.Write a program to take a number from user and print that number 100 times.
*/
#include<stdio.h>
int main(){
    int number,count=1;
    printf("enter the number: ");
    scanf("%d",&number);
    while(count<=100){
        printf("%d ",number);
        count=count+1;
    }
    return 0;
}