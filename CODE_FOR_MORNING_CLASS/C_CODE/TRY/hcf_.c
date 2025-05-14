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
    printf("GCF of the %d and %d is %d ", num2, num1, divisor);
    return 0;
}