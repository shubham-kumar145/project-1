#include<bits/stdc++.h>
using namespace std;
int main(){
    int number1,number2,sum1=0,sum2=0;
    cin >> number1;
    int array1[number1];
    for (int i=0;i<number1;i++){
        cin >> number2;
        array1[i]=number2;
    }
    for (int i =0;i<number1;i++){
        cout << array1[i] << " ";
    }
    cout << endl;
    for (int i=0 ;i<number1/2;i++){
        sum1=array1[i];
        sum2=array1[number1-i-1];
        array1[i]=sum2;
        array1[number1-i-1]=sum1;
    }
    for (int i =0;i<number1;i++){
        cout << array1[i] << " ";
    }
    return 0;

}