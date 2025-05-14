#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,rem,decimal=0,i=1;
    cout << "enter the number:";
    cin >> num;
    while (num > 0)
    {
        rem=num%10;
        num=num/10;
        decimal = (rem * i)+decimal;
        i=i*2;
    }
    cout << "decimal : "<< decimal;
    return 0;
}