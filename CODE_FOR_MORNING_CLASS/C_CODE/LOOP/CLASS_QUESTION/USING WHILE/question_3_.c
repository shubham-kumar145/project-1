/*
 3. Write a program to take a number from user and print from user input to 1.
*/
#include<stdio.h>
int main(){
    int number,ep=1;
    printf("enter the number: ");
    scanf("%d",&number);
    while(number>=ep){
        printf("%d ",number);
        number=number-1;
    }
    return 0;
}