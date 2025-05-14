#include <bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if (i>n){
        return;
    }
    swap(array[i],array[n]);
    print(i+1,n-1);
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
    print(array[0],array[n-1]);
    return 0;
}