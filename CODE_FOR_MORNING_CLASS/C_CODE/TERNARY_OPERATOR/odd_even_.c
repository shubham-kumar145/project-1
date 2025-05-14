/*
4.Find out whether the given number is odd or not using Ternary Operator
*/
#include <stdio.h>
int main()
{
    int number;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &number);
    (number % 2 == 0) ? printf("NUMBER IS EVEN") : printf("NUMBER IS ODD");
    return 0;
}