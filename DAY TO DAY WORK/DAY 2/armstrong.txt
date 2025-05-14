#include <bits/stdc++.h>
using namespace std;
int main(){
    int number,sum = 0;
    cout << "enter the number"<< endl;
    cin >> number;
    int s_number = number;
    while (number> 0){
        int reminder=number%10;
        sum=sum+(reminder*reminder*reminder);
        number = number/10;
    }
    if (s_number==sum){
        cout << "it is a armstrong number"<<endl;
    }
    else{
        cout << "it is not a armstrong number"<< endl;
    }
    return 0;
}