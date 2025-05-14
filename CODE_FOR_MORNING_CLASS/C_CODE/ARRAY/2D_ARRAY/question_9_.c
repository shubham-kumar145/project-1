#include <stdio.h>
int main()
{
    int row, column, max = 0, min = 999999;
    printf("enter the row: ");
    scanf("%d", &row);
    printf("enter the coloum: ");
    scanf("%d", &column);
    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("enter the value for %d column of %d row", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (max <= array[i][j])
            {
                max = array[i][j];
            }
            if (min >= array[i][j])
            {
                min = array[i][j];
            }
        }
    }
    printf("maximun = %d\nminimum = %d",max,min);
    return 0;
}