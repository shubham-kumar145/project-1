#include <stdio.h>
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    for (int i = 1, k = 65; i <= number; k++, i++)
    {
        for (int j = 0; j < number; j++)
        {
            printf("%c ", k + j);
        }
        printf("\n");
    }
    return 0;
}