/*
 8.Write a program to take a number from user and print the sum of 1 to that number.
*/
#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("enter the number: ");
    scanf("%d", &number);
    while (number > 0)
    {
        sum = sum + number;
        number = number - 1;
    }
    printf("sum : %d", sum);
    return 0;
}
