#include <stdio.h>
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    for (int i = 1; i < number; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int j = i; j <= number; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= number; i++)
    {
        for (int j = number; j > i; j--)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}