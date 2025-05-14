/*
 23.Write a program to take a number from user and print fibonacci number till user’s input
*/
#include<stdio.h>
int main(){
    int number,temp1,temp2=1,sum=0;
    printf("enter the number: ");
    scanf("%d",&number);
    while(sum<=number){
        temp1=sum;
        printf("%d ",sum);
        sum=sum+temp2;
        temp2=temp1;
    }
    return 0;
}