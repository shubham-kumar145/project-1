#include <bits/stdc++.h>
using namespace std;
int main(){
    int number1,number2;
    cout << "enter the two number for GCD"<<endl;
    cin >> number1 >> number2;
    for (int i =min(number1,number2);i>0;i--){
        if ((number1%i==0)&&(number2%i==0)){
            cout << i << " ";
            break;
        }
    }
    return 0;
}