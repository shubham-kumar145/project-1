// find maximun number between two number without using a/ny function
#include<iostream>
using namespace std;
int main ( ){
    int a,b,c;
    cout << "enter the first number: ";
    cin  >> a;
    // cout << " enter the second number: ";
    // cin  >> b;
    // c = (a>b);  //  maxinum and minimum without using function
    // cout << c;
    c = (a%2==0);  // even and odd without using function
    cout << "number is a even number  "<<c;
    return 0;
}