#include <stdio.h>
int main()
{
    int number, rem, decimal = 0, power = 1;
    printf("enter the number: ");
    scanf("%d", &number);
    while (number > 0)
    {
        rem = number % 10;
        number = number / 10;
        decimal = decimal + (rem * power);
        power = power * 2;
    }
    printf("decimal number = %d", decimal);
    return 0;
}