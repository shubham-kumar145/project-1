#include <stdio.h>
void pattern(int a);
int main()
{
    int num1;
    printf("enter the number: ");
    scanf("%d", &num1);
    pattern(num1);
    return 0;
}
void pattern(int a)
{
    for (int i = a, k = 65; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (i == a)
            {
                printf("%c ", k + j);
            }
            else if (i == 1)
            {
                printf("%c ", k + a);
            }
            else
            {
                printf("%d ", j+1);
            }
        }
        printf("\n");
    }
}