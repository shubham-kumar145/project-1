/*
Given a sorted array arr with possibly some duplicates,
the task is to find the first and last occurrences of an element x in the given array.
Note: If the number x is not found in the array then return both the indices as -1
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
        else if (t < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int leftmost(int arr[], int t, int n)
{
    int start = 0, end = n - 1, left = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (t == arr[mid])
        {
            left = mid;
            end = mid - 1;
        }
        else if (t > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return left;
}
int rightmost(int arr[], int t, int s, int n)
{
    int start = s + 1, end = n, right = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (t == arr[mid])
        {
            right = mid;
            start = mid + 1;
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
    return right;
}

int main()
{
    int arr[] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    int t = 4;
    int mid = binary(arr, t, size);
    // printf("%d", mid);
    int occ=0;
    if (mid == -1)
    {
        printf("No occurrence of %d in the array", t);

    }
    else
    {
        int left = leftmost(arr, t, mid);
        int rigth = rightmost(arr, t, mid, size);
        occ = rigth - left;
        printf("%d occurrence of %d in the array", occ+1,t);
    }
    return 0;
}