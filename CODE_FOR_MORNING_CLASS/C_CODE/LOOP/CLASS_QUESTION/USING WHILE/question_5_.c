/*
 5.Write a program to print alphabets from a to z .
*/
#include<stdio.h>
int main(){
    char ch = 'a';
    printf("Alpha: ");
    while(ch <= 'z'){
        printf("%c, ",ch);
        ch=ch+1;
    }
    return 0;
}