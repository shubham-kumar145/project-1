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
void print(int n, int m, int array4[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", array4[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int row, column;
    printf("enter the row: ");
    scanf("%d", &row);
    printf("enter the coloum: ");
    scanf("%d", &column);
    int array[row][column], array1[row][column], array2[row][column];
    input(row, column, array);
    input(row, column, array1);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            array2[i][j] = array[i][j] + array1[i][j];
        }
    }
    print(row, column, array);
    print(row, column, array1);
    print(row, column, array2);
    return 0;
}