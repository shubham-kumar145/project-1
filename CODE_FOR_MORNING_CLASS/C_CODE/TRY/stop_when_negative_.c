/*
23.Write a program to keep taking input from the user until he gives a negative number
E.x: input : 2 , 4 , 5 , 6 , 7 , - 9. output : found a negative number stop the loop.
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