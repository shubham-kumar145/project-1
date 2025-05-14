#include <stdio.h>
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        for (int j = 1; j <= number + i; j++)
        {
            if (i + j == number)
            {
                printf("* ");
            }
            else if ((j == number + i && i > 0))
            {
                printf("* ");
            }
            else if ((i == number / 2) && (j > number / 2) && (j < number + i))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}