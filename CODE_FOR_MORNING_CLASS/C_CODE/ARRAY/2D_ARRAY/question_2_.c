#include <stdio.h>
void input(int array[row][column]);
void output(int array[row][column]);
int row, column;
int main()
{
    printf("enter the row: ");
    scanf("%d", &row);
    printf("enter the coloum: ");
    scanf("%d", &column);
    int array[row][column];
    input(array);
    output(array);
    return 0;
}
void input(int array[row][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("enter the value for %d column of %d row", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}
void output(int array[row][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}