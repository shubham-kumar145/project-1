#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout << "enter the number"<<endl;
    cin >> number;
    for (int i =1;i<=number;i++){
        for (int j = 1 ;j<=number;j++){
            if ((number%2!=0) &&(i==((number/2)+1)) || (j==((number/2)+1))){
                cout << "* ";
            }
            else if ((number%2==0)&&((i==number/2)||(i==number/2+1)||(j==number/2)||(j==number/2+1))){
                cout << "* ";
            }
            else {
                cout << "  ";
            }

        }
        cout <<  endl;

    }
    return 0;
}