#include <stdio.h>
int main()
{
    int number, m, q, k, j, p, ch = 65;
    printf("enter the number of row: ");
    scanf("%d", &number);
    k = 1;
    for (int i = 1; i <= number; i++)
    {
        m = k;
        q = 1;
        if (i % 2 != 0)
        {
            for (j = m, p = q; j <= m + 4; p++)
            {
                if (p % 2 != 0)
                {
                    if (j <= 9)
                    {
                        printf(" %d ", j);
                    }
                    else
                    {
                        printf("%d ", j);
                    }
                    k = j + 1;
                    j = j + 2;
                }
                else
                {
                    printf("  ");
                }
            }
        }
        else
        {
            for (j = q; j <= 5; j++, ch++)
            {
                if (j % 2 == 0)
                {
                    printf(" %c ", ch);
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}