/*
Given a sorted array Arr[](0-index based) consisting of N distinct integers and an integer k,
the task is to find the index of k, if its present in the array Arr[].
Otherwise, find the index where k must be inserted to keep the array sorted.
*/
#include <stdio.h>
int binary(int arr[], int t, int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (t == arr[mid])
        {
            return mid;
        }
        else if (t <= arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 22, 33, 44, 55, 66, 77};
    int size = sizeof(arr) / sizeof(int);
    // printf("%d",size);
    int n;
    printf("enter the target number: ");
    scanf("%d", &n);
    int place = binary(arr, n, size);
    if (place < size && n == arr[place])
    {
        printf("index of the number is : %d", place);
    }
    else
    {
        printf("index should be on : %d", place);
    }
    return 0;
}