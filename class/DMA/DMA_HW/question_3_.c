/*
Question 3: Doubling Array Size
Question: Create an array of size n=4 using malloc and initialize it with values 1, 2, 3, 4. 
Double the size using realloc and initialize the new elements as 5, 6, 7, 8.

Input:
Initial size: 4
New size: 8
 Output:
Original array: 1 2 3 4
Resized array: 1 2 3 4 5 6 7 8
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=4;
    int* arr;
    arr = (int*)malloc(sizeof(int)*4);
    for (int i = 0; i < n; i++)
    {
        arr[i]=i*i;
    }
    arr = (int*)realloc(arr,sizeof(int)*8);
    for (int i = n; i < 8; i++)
    {
        arr[i]=i*i;
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}