#include<bits/stdc++.h>
using namespace std;
int main (){
    int number1;
    cin >> number1;
    int array[number1];
    map<int,int>mpp;
    for (int i=0;i<number1;i++){
        int number2 ;
        cin >> array[i];
        mpp[array[i]]++;
    }
    for (auto it :mpp){
        cout << it.first <<"    "<<it.second<< endl;
    }

    for(int i=0;i<number1;i++){
        int number4;
        cin >> number4;
        cout << mpp[number4]<<endl;
    }
    return 0;
}