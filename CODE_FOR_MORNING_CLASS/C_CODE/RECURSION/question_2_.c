/*
Q2.Print numbers from 10 to 1 Using Recursion.
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
    printf("%d ", num);
    number(num - 1);
    return;
}