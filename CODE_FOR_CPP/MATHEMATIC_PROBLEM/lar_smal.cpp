#include<bits/stdc++.h>
using namespace std;
int main(){
    int number,a_number;
    cin >> number;
    int array[number];
    for (int i =0 ; i<number;i++){
        cin >> a_number;
        array[i]=a_number;
    }
    int array1=array[0];
    int position =0;
    for(int i =0;i<number;i++){
        if (array1>array[i]){
            array1=array[i];
            position= i;
        }
    }
    cout<<"smallest number"<<array1<<endl<<"position  "<<position;
    return 0;
}