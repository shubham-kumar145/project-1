// #include<iostream>
// using namespace std;
// int main(){
//     int number1,number2,fact =1;
//     cout << "enter thr number: ";
//     cin >> number1;
//     number2 = number1;
//     while(number1 > 1){
//         fact = fact *number1;
//         number1--;
//     }
//     cout << "factorail of "<<number2<<" is:  "<<fact;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int number1,number2,sum =0;
    cout << "enter thr number: ";
    cin >> number1;
    number2 = number1;
    while(number1 > 0){
        sum = sum +number1;
        number1--;
    }
    cout << "sum of "<<number2<<" is:  "<<sum;
    return 0;
}