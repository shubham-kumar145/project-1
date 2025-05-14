/*
 25.Write a program to keep taking input from the user until he gives a negative number
*/
#include <stdio.h>
int main()
{
    int number = 0;
    while (number >= 0)
    {
        printf("enter the number:");
        scanf("%d", &number);
    }
    printf("found a negative number stop the loop");
    return 0;
}