#include <stdio.h>
int binary(int arr[], int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == mid)
        {
            return mid;
        }
        else if (target < arr[mid])
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
int leftmost(int arr[],int target,int start,int end){
    int mid = start + (end - start )/2;
    int place;
    while(start != end){
        if(target == arr[mid]){
            place = mid;
        }
        else if(target >= arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }

    }
    return place;
}
int rightmost(int arr[],int target,int start,int end){
    int mid = start + (end - start )/2;
    int place;
    while(start != end){
        if(target == arr[mid]){
            place = mid;
        }
        else if(target >= arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }

    }
    return place;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7};
    int start = 0, end = 12;
    int mid = 0, left = 0, right = 0;
    int target = 4;
    mid = binary(arr,target,start,end);
    left = leftmost(arr,target,start,mid-1);
    right = rightmost(arr,target,mid+1,end);

    printf("%d -- %d -- %d",left,mid,right);
    return 0;
}