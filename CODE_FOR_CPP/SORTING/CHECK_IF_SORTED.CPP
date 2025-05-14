// CHECK WHEATHER GIVEN ARRAY IS SORTED OR NOT ?
#include<bits/stdc++.h>
using namespace std;
int c_sorted(int array[],int n){
    for (int i =0 ;i<n;i++){
        if (array[i]>array[i+1]){
            return 1;
        }
        else {
            return 0;
        }
    }
}
int main(){
    int number1;
    int array[number1];
    for (int i=0;i<number1;i++){
        cin >> array[i];
    }
    cout << "fef "<<c_sorted(array,number1);
    return 0;
}