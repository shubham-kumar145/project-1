#include <bits/stdc++.h>
using namespace std;
int main (){
    int t_num,number;
    cout << "enter the length of array;- "<< endl;
    cin >> t_num;
    int array[t_num];
   for (int i = 0;i<t_num;i++){
        cin >> number;
        array[i]=number; 
    }
    for (int i = 0;i<t_num;i++){
        cout << array[i]<< endl;
    }
    return 0;
}