#include<stdio.h>
int binary(int arr[],int size,int target){
    int start = 0,end = size-1;
    while(start <= end){
        int mid = start +(end - start)/2;
        if(target == arr[mid]){
            return arr[mid];
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return arr[start];
}
int main(){
    int arr[] = {1, 3, 4, 5, 7, 9, 12, 15, 17, 19.24, 27, 30, 35, 39};
    int size = sizeof(arr)/sizeof(int);
    int target;
    scanf("%d",&target);
    int element = binary(arr,size,target);
    printf("element = %d",element);
    return 0;
}