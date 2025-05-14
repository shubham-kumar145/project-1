/*
Given a positive integer n, find the square root of n. 
If n is not a perfect square, then return the floor value.
Floor value of any number is the greatest Integer which is 
less than or equal to that number
*/
#include<stdio.h>
int binary(int num){
    int start = 0 , end = num;
    while (start<=end){
        int mid = start + (end - start)/2;
        if(mid*mid == num){
            return mid;
        }
        else if(mid*mid >num){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return start-1;
}
int main(){
    int num;
    scanf("%d",&num);
    int place = binary(num);
    if(place*place == num){
        printf("Since, %d is a perfect square, so its square root is %d. ",num,place);
    }
    else{
        printf("Since, %d is not a perfect square, floor of square root of %d is %d.",num,num,place);
    }
    return 0;
}