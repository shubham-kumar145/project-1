#include <stdio.h>
int main()
{
    int number, reverse = 0, rem;
    printf("enter the number: ");
    scanf("%d", &number);
    while (number > 0)
    {
        rem = number % 10;
        reverse = (reverse * 10) +rem;
        number = number / 10;
    }
    printf("after the reverse: %d",reverse);
}