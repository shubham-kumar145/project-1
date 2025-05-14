#include<bits/stdc++.h>
using namespace std;
int arra[5][5];
int step =0;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin >>arra[i][j];
            if(arra[i][j]==1){
                if(i>3){
                    if(j>3){
                        step = i-3 +(j-3);
                    }
                    else{
                        step = i-3 +(3-j);
                    }
                }
                else{
                    if(j>3){
                        step = 3-i +(j-3);
                    }
                    else{
                        step = 3-i +(3-j);
                    }
                }
            }
        }
    }
    cout << step;
    return 0;
}
