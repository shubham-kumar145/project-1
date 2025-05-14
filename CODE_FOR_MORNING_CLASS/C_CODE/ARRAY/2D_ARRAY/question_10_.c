#include<stdio.h>
int main(){
    int row,column;
    printf("enter the row: ");
    scanf("%d",&row);
    printf("enter the coloum: ");
    scanf("%d",&column);
    int array[row][column],array1[row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            array1[j]=0;
            printf("enter the value for %d column of %d row ",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < column; j++)
        {
            sum=sum+array[i][j];
            array1[j]=array1[j]+array[i][j];
        }
        printf("sum of %d column: %d",i+1,sum);
        printf("\n");
    }
    for (int i = 0; i <= row; i++)
    {
        printf("sum of %d row = %d \n",i+1,array1[i]);
    }
    return 0;
}