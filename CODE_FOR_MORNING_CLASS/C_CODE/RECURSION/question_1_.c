/*
Q1.Print numbers from 1 to 10 Using Recursion.
*/
#include <stdio.h>
void number(int num);
int main()
{
    number(10);
    return 0;
}
void number(int num)
{
    if (num == 0)
    {
        return;
    }
    number(num - 1);
    printf("%d ", num);
    return;
}