/*
Question 2 : Shrinking an Array
Question 2: Allocate memory for an array of size 8 using calloc, initialize it with values 1 to 8, and shrink it to size 5 using realloc.

Input:
Initial size: 8
Shrink size: 5
Output:
Original array: 1 2 3 4 5 6 7 8
Resized array: 1 2 3 4 5
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n = 8;
    int* arr;
    arr = (int*)malloc(sizeof(int)*8);
    printf("enter the number: ");
    for (int i = 0; i < n; i++)
    {
        arr[i]=i*i;
    }
    arr = (int*)realloc(arr,sizeof(int)*5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ",arr[i]);
    }
        
    return 0;
}