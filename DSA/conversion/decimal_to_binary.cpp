#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,rem,i=1;
    int binary =0;
    cout<<"enter the number :";
    cin >> num;
    int num1=num;
    while (num>0)
    {
        rem=num%2;
        num=num/2;
        binary=rem*i+binary;
        i=i*10;
    }
    cout << "decimal to binary conversion of "<< num1<<" is "<< binary;
    return 0;
}