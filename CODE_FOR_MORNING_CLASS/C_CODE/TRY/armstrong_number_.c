#include <stdio.h>
int main()
{
    int number, number3, power = 1, rem, number2, armstrong = 0;
    printf("enter the number: ");
    scanf("%d", &number);
    number2 = number;
    number3 = number;
    while (number > 0)
    {
        rem = number % 10;
        number = number / 10;
        while (number3 > 0)
        {
            power = power * rem;
            number3 = number3 / 10;
        }
        armstrong = armstrong + power;
        number3 = number2;
        power = 1;
    }
    if (number2 == armstrong)
    {
        printf("it is a armstrong number: ");
    }
    else
    {
        printf("not an armstrong number: ");
    }
    return 0;
}