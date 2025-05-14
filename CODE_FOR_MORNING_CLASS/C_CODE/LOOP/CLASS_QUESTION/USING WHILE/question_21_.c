/*
 21.Write a program to print number 1 to 10 but skip whose divisible by 3 using CONTINUE
 keyword.
*/
#include <stdio.h>
int main()
{
    int number = 1;
    while (number <= 10)
    {
        if (number % 3 == 0)
        {
            number = number + 1;
            continue;
        }
        printf("%d ", number);
        number = number + 1;
    }
    return 0;
}