#include<bits/stdc++.h>
using namespace std;
void reverse(int array[],int i,int n){
    if (i>n){
        return;
    }
    swap(array[i],array[n]);
    reverse(array,i+1,n-1);
}
int main(){
    int number1,number2;
    cin >> number1;
    int array[number1];
    for (int i=0;i<number1;i++){
        cin >> array[i];
    }
    reverse(array,0,number1-1);
    for (int i=0;i<number1;i++){
        cout << array[i]<< endl;
    }
    return 0;
}