/*
Write a program to take no. of row and column from user and 
input elements and print the matrix.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int** arr =(int**)malloc(sizeof(int*)*3);   // size 24  and made 3 array
    for (int i = 0; i < 3; i++)
    {
            arr[i]=(int*)malloc(sizeof(int)*3);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j]=i*j+1;
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
        
    }
    for (int i = 0; i < 3; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}