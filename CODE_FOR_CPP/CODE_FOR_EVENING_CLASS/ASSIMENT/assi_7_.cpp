//shorting the string
#include<iostream>
using namespace std;
int main(){
    string ch;
    cout << "enter the value: ";
    cin >> ch;
    for(int i = ch.size()-1;i>0;i--){
        for (int j = 0; j < i; j++)
        {
            if (ch[j]>ch[j+1]){
                ch[j]=(ch[j]+ch[j+1])-(ch[j+1]=ch[j]);
            }
        }
    }
    cout << "after shorting: "<<ch;
}