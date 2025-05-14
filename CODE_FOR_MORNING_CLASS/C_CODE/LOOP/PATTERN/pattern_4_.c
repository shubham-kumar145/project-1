/*
1 1 1 1 1
1 0 0 0 1
1 0 0 0 1
1 0 0 0 1
1 1 1 1 1
*/
#include <stdio.h>
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if ((i == 1) || (i == number) || (j == 1) || (j == number))
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}