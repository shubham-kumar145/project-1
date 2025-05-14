#include <bits/stdc++.h>
using namespace std;
int main (){
    int number ,reverse =0,reminder;
    cout << "enter the number"<< endl;
    cin >> number;
    int s_number=number;
    while (number> 0){
        reminder = number %10;
        reverse=(reverse*10)+reminder;
        number = number /10;
    }
    if (s_number == reverse ){
        cout << "it is a palindrome number"<<endl;
    }
    else {
        cout << "it is not a palindrome number";
    }
    return 0;

}