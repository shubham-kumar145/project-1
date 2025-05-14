/*
Given a sorted array arr[] (with unique elements) and an integer k, 
find the index (0-based) of the largest element in arr[] that is less than or equal to k. 
This element is called the "floor" of k. If such an element does not exist, return -1.
*/
#include<stdio.h>
int binary(int arr[],int t,int n){
    int start = 0,end = n-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(t == arr[mid]){
            return mid;
        }
        else if (t < arr[mid])
        {
            end = mid -1;
        }
        else{
            start = mid +1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int target ;
    scanf("%d",&target);
    int place = binary(arr,target,15);
    printf("index of the array is %d",place);
    return 0;
}