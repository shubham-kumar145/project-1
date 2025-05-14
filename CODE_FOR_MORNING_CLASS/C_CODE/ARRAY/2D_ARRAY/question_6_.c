#include <stdio.h>
int main()
{
    int row, column, num,count=0;
    printf("enter the row: ");
    scanf("%d", &row);
    printf("enter the coloum: ");
    scanf("%d", &column);
    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("enter the value for %d column of %d row ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
    printf("enter the number: ");
    scanf("%d", &num);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
    if (array[i][j] == num){
        count++;
    }

        }
    }
    if (count > 0)
    {
        printf(" the given number %d is present in the array", num);
    }
    else
    {
        printf(" the given number %d is not present in the array", num);
    }
    return 0;
}