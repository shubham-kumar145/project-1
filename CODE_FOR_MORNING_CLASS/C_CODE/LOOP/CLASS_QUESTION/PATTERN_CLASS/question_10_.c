#include <stdio.h>
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    for (int i = 1; i <= 2 * number - 1; i++)
    {
        if (i <= number)
        {
            for (int j = i; j > 0; j--)
            {
                printf("* ");
            }
        }
        else
        {
            for (int a = 2 * number - 1; a >= i; a--)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}