#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    number=number+96;
    while(number>=97){
        printf("%c ",number);
        number=number-1;
    }
    return 0;
}