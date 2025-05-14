#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,a,b;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int count=0;
        cin >> a >> b;
        while(a%b!=0){
            count++;
            a++;
        }
        cout << count<<endl;
    }
    
    return 0;
}