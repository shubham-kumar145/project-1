#include <bits/stdc++.h>
using namespace std;
void sorting(int array[],int n){
    for (int i=0;i<n-2;i++){
        int mini= i;
        for (int k=i;k<n;k++){
            if (array[k]<array[mini]){
                mini = k;
            }
            int temp = array[mini];
            array[mini]=array[i];
            array[i]=temp;
        }
    }
    for (int it =0;it<n-1;it++){
        cout << array[it]<<endl;
    }
}
int main (){
    int number;
    cin >> number;
    int array[number];
    for (int i=0;i<number;i++){
        cin >> array[i];
    }
    sorting(array,number);
    return 0;
}