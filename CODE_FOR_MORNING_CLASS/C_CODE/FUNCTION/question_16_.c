#include <stdio.h>
int count(int a);
int power(int a, int b);
void check(int a, int b);
int main()
{
    int number, number1, coun, pow, armstrong = 0, rem;
    printf("enter the number: ");
    scanf("%d", &number);
    number1 = number;
    coun = count(number);
    while (number > 0)
    {
        rem = number % 10;
        number = number / 10;
        pow = power(rem, coun);
        armstrong = armstrong + pow;
    }
    check(number1, armstrong);
    return 0;
}
int count(int a)
{
    int coun = 0;
    while (a > 0)
    {
        coun++;
        a=a/10;
    }
    return coun;
}
int power(int a, int b)
{
    int pow = 1;
    while (b > 0)
    {
        pow = pow * a;
        b--;
    }
    return pow;
}
void check(int a, int b)
{
    if (a == b)
    {
        printf("yes it is an Armstrong number");
    }
    else
    {
        printf("no it is not an Armstrong number");
    }
}