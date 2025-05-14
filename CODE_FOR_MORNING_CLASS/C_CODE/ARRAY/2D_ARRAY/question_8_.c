#include <stdio.h>
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
int main()
{
    int row, column, count = 0;
    printf("enter the row: ");
    scanf("%d", &row);
    printf("enter the coloum: ");
    scanf("%d", &column);
    int array[row][column], array1[row][column];
    input(row, column, array);
    input(row, column, array1);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (array[i][j] == array1[i][j])
            {
                count++;
            }
        }
    }
    if (count == row * column)
    {
        printf(" the matrices are equal ");
    }
    else
    {
        printf(" the matrices are not equal ");
    }
    return 0;
}