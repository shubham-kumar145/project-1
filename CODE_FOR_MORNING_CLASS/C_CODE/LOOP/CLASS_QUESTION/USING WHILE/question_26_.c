/* 
26.Write a program to take a number from user and check that number is armstrong or not .
*/
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
        printf("%d is a armstrong number: ",number2);
    }
    else
    {
        printf("%d is not an armstrong number: ",number2);
    }
    return 0;
}