/*
 6.Write a program to take alphabet from user and print from 'a' to till input.
*/
#include<stdio.h>
int main(){
    char alp,sp='a';
    printf("enter the alphabet till you want to print: ");
    scanf("%c",&alp);
    while(sp<=alp){
        printf("%c ",sp);
        sp=sp+1;
    }
    return 0;
}