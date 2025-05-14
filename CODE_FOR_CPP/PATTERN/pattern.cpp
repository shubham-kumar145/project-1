#include<bits/stdc++.h>
using namespace std;
void pattern1(int number){
    for (int i=1 ;i<=number;i++){
        for (int j=1;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
}
void pattern2(int number){
    for (int i=0;i <number;i++){
        for (int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main (){
    int number;
    cin >> number;
    pattern2 (number);
    return 0;
}