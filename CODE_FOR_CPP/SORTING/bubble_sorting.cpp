#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int array[],int n,int count){
    for (int i=n-1;i>0;i--){
        for (int j=0;j<i;j++){
            if (array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                count++;
            }
        }
    }
    for (int i=0;i<n;i++) {
        cout << array[i]<<endl;
    }
    cout << "run time = "<< count<<endl;
}
void insetion_sort(int array[],int n,int count){
    for (int i=0;i<n;i++){
        int j=i;
        while (j>0 && array[j-1]>array[j]){
            swap(array[j-1],array[j]);
            j--;
            count++;
        }
    }
    
    for (int i=0;i<n;i++) {
        cout << array[i]<<endl;
    }
    cout << "run time = " << count<<endl;
}
int main (){
    int number,count=0;
    cin >> number;
    int array[number];
    for (int i=0 ;i<number;i++){
        cin >> array[i];
    }
    
    insetion_sort(array,number,count);
    return 0;
}