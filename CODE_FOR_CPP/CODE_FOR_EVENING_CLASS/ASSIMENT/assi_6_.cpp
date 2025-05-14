//convert uppercase into lowercase and lowercase into uppercase
#include<iostream>
using namespace std;
int main(){
    string ch;
    cout << " enter the value: ";
    cin >> ch;
    for (int i=0 ; i < ch.size() ; i++ ){
        if ((ch[i] >= 'a') &&(ch[i]<='z')){
            ch[i]=ch[i]-32;
        }
        else if ((ch[i]>='A')&&(ch[i]<='Z'))
        {
            ch[i]=ch[i]+32;
        }
        else
        {
            ch[i]=ch[i];
        }
    }
    cout << "given: "<<ch;
    return 0;
} 