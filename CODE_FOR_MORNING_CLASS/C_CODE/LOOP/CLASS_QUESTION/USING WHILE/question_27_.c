/*27.Write a program to take a number from user and check that number is strong number or
 not .
*/
#include <stdio.h>
int main()
{
    int number1, number2, fact = 1, rem, strong = 0;
    printf("enter the number: ");
    scanf("%d", &number1);
    number2 = number1;
    while (number1 > 0)
    {
        rem = number1 % 10;
        number1 = number1 / 10;
        while (rem > 1)
        {
            fact = fact * rem;
            rem=rem-1;
        }
        strong = strong + fact;
        fact = 1;
    }
    if (number2 == strong)
    {
        printf("%d is a strong number: ",number2);
    }
    else
    {
        printf("%d is not a strong number: ",number2);
    }
    return 0;
}