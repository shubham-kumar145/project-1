#include<bits/stdc++.h>
using namespace std;
void print(int i,int fact){
    if (i==0){
        cout << fact << endl;
        return;
    }
    print(i-1,fact*i);
}
int print1(int fact){
    if (fact==0){
        return 1;
    }
    return fact * print1(fact-1);
}
int main (){
    int number;
    cin >> number ;
    cout << print1(number);
}