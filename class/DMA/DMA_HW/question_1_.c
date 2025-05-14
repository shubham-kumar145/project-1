/*
Question 1 : Basic Resizing
Question: Dynamically allocate memory for an array of size 3 using malloc. Assign values 10, 20, 30. Then resize the array to size 5 using realloc and initialize the new elements with 40 and 50.

Input:
Original size: 3
New size: 5
Output:
Original array: 10 20 30
Resized array: 10 20 30 40 50
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n= 3;
    int *arr;
    arr = (int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = (i+1)*10;
    }
    arr = (int*)realloc(arr,sizeof(int)*5);
    for (int i = n; i < 5; i++)
    {
        arr[i]=(i+1)*10;
    }
    for (int i=0;i<5;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}