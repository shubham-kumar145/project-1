/*
Q3.Take a number from user and print the sum of all number Using Recursion.
*/
#include <stdio.h>
int sum(int a);
int main()
{
    int num1, num2;
    printf("enter the number: ");
    scanf("%d", &num1);
    num2 = sum(num1);
    printf("sum of all number: %d", num2);
    return 0;
}
int sum(int a)
{
    int add;
    if (a == 1)
    {
        return 1;
    }
    return add = a + sum(a - 1);
}