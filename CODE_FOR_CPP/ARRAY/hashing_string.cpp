#include <bits/stdc++.h>
using namespace std;
int main (){
    string letter;
    cin >> letter;
    int hash[256]={0};
    for(int i =0;i<letter.size();i++){
        hash[letter[i]]++;
    }
    int number2;
    char number3;
    cin >> number2;
    while (number2--){
        cin >> number3;
        cout << hash[number3]<<endl;
    }
    return 0;
}