/*
 7.Write a program to take alphabet from user and print from user input to till 'a'
*/
#include<stdio.h>
int main(){
    char alp;
    printf("enter the alphabet fron where you want to start: ");
    scanf("%c",&alp);
    while(alp>='a'){
        printf("%c ",alp);
        alp=alp-1;
    }
    return 0;
}