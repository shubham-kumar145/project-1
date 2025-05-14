#include <stdio.h>
int main()
{
    int a;
    printf("enter the digits:-");
    scanf("%d", &a);
    int rev;
    int rem;
    while (a != 0)
    {
        rev = a / 10;
        rem = a % 10;
        a = rev;
        printf("%d", rem);
    }
    return 0;
}