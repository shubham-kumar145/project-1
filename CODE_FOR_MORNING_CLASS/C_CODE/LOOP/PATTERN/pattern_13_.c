#include <stdio.h>
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    for (int i = 1, k = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; k++, j++)
        {
            if (k > 0 && k <= 9)
            {
                printf("%d  ", k);
            }
            else
            {
                printf("%d ", k);
            }
        }
        printf("\n");
    }
    return 0;
}