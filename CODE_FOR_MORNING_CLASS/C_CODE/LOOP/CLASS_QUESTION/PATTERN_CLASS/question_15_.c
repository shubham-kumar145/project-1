#include <stdio.h>
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    for (int i = 1, k = number; i <= number; k--, i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = number - 1, j = 1; i > 0; i--, j++)
    {
        for (int k = 1; k <= j + 1; k++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}