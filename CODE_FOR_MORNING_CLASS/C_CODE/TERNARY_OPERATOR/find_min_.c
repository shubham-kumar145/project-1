/*
1. Write a C program to find the minimum of two integers using ternary operator.
*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d", &num1);
    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d", &num2);
    num3 = num1 < num2 ? num1 : num2;
    printf("SMALLEST NUMBER FROM THE ABOVE IS: %d",num3);
    return 0;
}