// reverse the array
#include <bits/stdc++.h>
using namespace std;
void print(int i,int array[],int n){
    if (i>=n/2){
        return;
    }
    swap(array[i],array[n]);
    print(i+1,array,n-1); 
}
int main (){
    int n;
    cin >> n;
    int array[n];
    for(int i=0;i<n;i++){
        int number;
        cin >> number;
        array[i]=number;
    }
    print(0,array,n-1);
    for(int i=0;i<n;i++){
        cout << array[i]<<"  ";
    }
    return 0;
}