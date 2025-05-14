#include <stdio.h>
int main()
{
    int num1, num2 = 0, rem, cnum1;
    printf("enter the number ");
    scanf("%d", &num1);
    cnum1 = num1;
    while (num1 > 0)
    {
        rem = num1 % 10;
        num1 = num1 / 10;
        num2 = ((num2 * 10) + rem);
    }
    if (cnum1 == num2)
    {
        printf("it is a palendrome");
    }
    else
    {
        printf("it is not a palendrome");
    }
    return 0;
}