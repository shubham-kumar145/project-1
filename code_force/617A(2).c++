#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    while(n!=0){
        for(int i=5;i>0;i--){
            sum +=(n/i);
            n%=i;
        }
    }
    cout << sum;
    return 0;
}