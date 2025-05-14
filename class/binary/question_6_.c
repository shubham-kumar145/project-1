/*
Given a sorted and rotated array arr and a target key k
which is rotated at some point,and may contain duplicates
and given an element key. Check whether the key is present
in the array or not.
*/
#include <stdio.h>
#include<stdbool.h>
bool binary(int arr[], int t, int size)
{
    int start =0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (t == arr[mid])
        {
            return true;
        }
        if (arr[start] == arr[mid] && arr[mid] == arr[end])
        {
            start++;
            end--;
            continue;
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
            if (t >= arr[mid] && t <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return false;
}
int main()
{
    int arr[] = {2, 3, 5, 6, 0, 0, 1, 1, 2};
    int t;
    printf("enter the target: ");
    scanf("%d", &t);
    int size = sizeof(arr) / sizeof(int);
    if (binary(arr, t, size)) {
        printf("Yes, the target is present in the array.\n");
    } else {
        printf("No, the target is not present in the array.\n");
    }
    return 0;
}
