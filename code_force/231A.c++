#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum=0;
    cin >> n;
    for(int i =0;i<n;i++){
        int count=0;
        for(int j=0;j<3;j++){
            cin>>m;
            if(m==1){
                count++;
            }
        }
        if(count>=2){
            sum++;
        }
    }
    cout << sum;
    return 0;
}