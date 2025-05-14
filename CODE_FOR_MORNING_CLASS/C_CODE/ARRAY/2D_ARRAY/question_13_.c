#include <stdio.h>
void input(int n, int m, int array4[n][m]);
int main()
{
    int row1, column1, row2, column2;
    printf("enter the  first row: ");
    scanf("%d", &row1);
    printf("enter the first coloum: ");
    scanf("%d", &column1);
    printf("enter the second row: ");
    scanf("%d", &row2);
    printf("enter the second coloum: ");
    scanf("%d", &column2);
    int array[row1][column1], array1[row2][column2], array2[row1][column2];
    input(row1, column1, array);

    input(row2, column2, array1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            array2[i][j] = 0;
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            for (int k = 0; k < column1; k++)
            {
                array2[i][j] += (array[i][k] * array1[k][j]);
            }
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void input(int n, int m, int array4[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter the value for %d column of %d row  ", i + 1, j + 1);
            scanf("%d", &array4[i][j]);
        }
    }
}