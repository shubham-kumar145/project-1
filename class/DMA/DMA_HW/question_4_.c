/*
Question 4: Growing and Shrinking Dynamically
Question: Create an array of size n=3 using calloc. Resize it to n=6 using realloc
(initialize new elements as 10, 20, 30) and then shrink it back to n=4.
Input:
Initial size: 3
Resize to: 6
Shrink to: 4
Output:
Original array: 0 0 0
After growing: 0 0 0 10 20 30
After shrinking: 0 0 0 10
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the size: ");
    scanf("%d", &n);
    int *arr;
    arr = (int *)calloc(sizeof(int), n);
    arr = (int *)realloc(arr, sizeof(int) * 6);
    printf("enter the element: ");
    for (int i = n; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    arr = (int *)realloc(arr, sizeof(int) * 4);
    for (int i = 0; i < 4; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}