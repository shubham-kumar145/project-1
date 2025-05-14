#include<bits/stdc++.h>
using namespace std;
int main (){
    int number;
    cin >>  number;
    int array[number];
    for (int i=0;i<number;i++){
        int number1;
        cin >> array[i];
    }
    int hash[20] ={0};
    for (int i=0;i<number;i++){
        hash[array[i]]+=1;
    }
    int number3;
    cin >> number3;
    while (number3--){
        int number4;
        cin >> number4;
        cout << hash[number4]<< endl;

    }
    return 0;
}