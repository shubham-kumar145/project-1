/*
2. Write a C program to check whether a given year is a leap year using ternary
operator.
*/
#include <stdio.h>
int main()
{
    int year;
    printf("ENTER THE YEAR: ");
    scanf("%d", &year);
    (year % 4 == 0) ? printf("IT's A LEAP YEAR") : printf("NOT A LEAP YEAR");
    return 0;
}