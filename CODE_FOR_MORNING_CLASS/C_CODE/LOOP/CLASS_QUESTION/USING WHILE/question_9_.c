/*
 9.Write a program to take a number from user and print the factorial of given number.
*/
#include <stdio.h>
int main()
{
    int number, fact = 1;
    printf("enter the number: ");
    scanf("%d", &number);
    while (number > 1)
    {
        fact = fact * number;
        number = number - 1;
    }
    printf("sum = %d",fact);
    return 0;
}