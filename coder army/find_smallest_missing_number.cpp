#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number";
    cin >> n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cout << "enter the "<<i<<"th element of the array";
        cin >> arr[i];
    }
    int mid,start=0,end =n-1,index;
    while(start <= end){
        mid = start + (end - start)/2;
        if(arr[mid] == mid){
            start = mid+1;
            index = mid+1;
        }
        if(mid < arr[mid]){
            index=mid;
            end = mid-1;
        }
        else{
            index = mid+1;
            start=mid+1;
        }
    }
    cout << index;
    
    return 0;
}