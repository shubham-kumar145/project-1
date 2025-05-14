#include <stdio.h>
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    for (int i = 1, k = 1; i <= number; k++, i++)
    {
        for (int j = 0; j < number; j++)
        {
            if (k + j > 10)
            {
                printf("%d ", k + j);
            }
            else
            {
                printf(" %d ", k + j);
            }
        }
        printf("\n");
    }
    return 0;
}