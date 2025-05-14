/*1.Write a C program to check whether a year is leap year or not.*/
#include <stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d", &year);
    if (year < 0)
    {
        printf("enter the valid year");
    }
    else if (year % 4 == 0)
    {
        printf("it is a leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}