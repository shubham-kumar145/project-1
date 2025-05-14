#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout << "enter the number: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int a = num; a > i+1; a--)
        {
            cout << " ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout << j+1;
        }
        for (int k = i; k >0; k--)
        {
            cout << k;
        }
        cout << endl;        
    }
    return 0;
}