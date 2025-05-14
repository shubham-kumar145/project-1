#include<stdio.h>
#include<stdlib.h>
int main(){
    int row,coloum;
    printf("enter the row: ");
    scanf("%d",&row);
    printf("enter the coloum: ");
    scanf("%d",&coloum);
    int* arr;
    arr = (int*)malloc(sizeof(int)*row);
    for (int i = 0; i < row; i++)
    {
        arr[i]=(int*)malloc(sizeof(int)*coloum);
    }
    printf("ente the element: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("want to increase the element \nenter the row and coloum: ");
    scanf()
    
    
    return 0;
}