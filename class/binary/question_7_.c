/*
A sorted array of distinct elements arr[] is rotated at some unknown point,
the task is to find the minimum element in it.
*/
#include <stdio.h>
int binary(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1])
        {
            return arr[mid];
        }
        if (arr[start] < arr[end])
        {
            if (arr[start] < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[end] < arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int binary1(int arr[], int size)
{
    int start = 0, end = size - 1;
    // int mid = 0;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[start])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return arr[start];
}
int main()
{
    int arr[] = {4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    int inde = binary1(arr, size);
    printf("smallest: %d", inde);
    return 0;
}