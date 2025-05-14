#include <stdio.h>
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    for (int i = number, k = 0; i > 0; i--, k++)
    {
        for (int j = number; j >= i; j--)
        {
            printf("%d ", j);
        }
        for (int j = 1; j <= ((i * 2) - 3); j++)
        {
            printf("%d ", i);
        }
        for (int j = number - k; j <= number; j++)
        {
            if (j == 1)
            {
                continue;
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    for (int i = 1; i < number; i++)
    {
        for (int j = number; j >= i + 1; j--)
        {
            printf("%d ", j);
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("%d ", i + 1);
        }
        for (int j = i + 1; j <= number; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}