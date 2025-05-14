/*
 24.Write a program to take two number from user and find greatest common factor of them.
*/
#include <stdio.h>
int main()
{
    int divisor, divident, remainder, num1, num2;
    printf("enter the first number: ");
    scanf("%d", &divisor);
    printf("enter the second number: ");
    scanf("%d", &divident);
    num1 = divident;
    num2 = divisor;
    remainder = divident % divisor;
    while (remainder != 0)
    {
        divident = divisor;
        divisor = remainder;
        remainder = divident % divisor;
    }
    printf(" %d is the Greatest Common Factor of %d and %d", divisor, num2, num1);
    return 0;
}