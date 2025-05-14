#include <stdio.h>
int main()
{
    double number, decimal = 0, number3, power = 1;
    int number2, binary = 0, count = 0,rem;
    printf("enter the number: ");
    scanf("%lf", &number);
    number3 = number;
    number2 = number;
    number = number - number2;
    while (number2 > 0)
    {
        rem = number2 % 2;
        number2 = number2 / 2;
        binary = binary + (rem * power);
        power = power * 10;
    }
    power = 10;
    if (number != 0)
    {
        while (count != 8)
        {
            if ((int)number == 1)
            {
                number = number - (int)number;
            }
            number = number * 2;
            // rem = number;
            decimal = decimal + ((int)number / power);
            power = power * 10;
            count++;
        }
    }
    decimal = binary + decimal;
    if (number3 == (int)number3)
    {
        printf("%d", binary);
    }
    else
    {
        printf("%lf", decimal);
    }
    return 0;
}