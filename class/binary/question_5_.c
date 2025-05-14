/*
Given a sorted and rotated array A of N distinct elements which are rotated at some point,
and given an element K. The task is to find the index of the given element K in array A.
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
        if (arr[start] <= arr[mid])
        {
            if (t >= arr[start] && t <= arr[mid])
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
            if (t <= arr[end] && t >= arr[mid])
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
int main()
{
    int arr[] = {5, 6, 7, 8, 1, 2, 3, 4};
    int n;
    printf("enter the target number: ");
    scanf("%d", &n);
    int size = sizeof(arr) / sizeof(int);
    int place = binary(arr, n, size);
    printf("index if the number: %d", place);
    return 0;
}