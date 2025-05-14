#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin >> name;
    int size = name.length();
    for(int i = 0;i<size;i++){
        for(int j =0;i<size-i;j++){
            if(name[j]<name[j+2]){
                char tem = name[j];
                name[j]=name[j+2];
                name[j+2]=tem;
            }
            j++;
        }
        i++;
    }
    cout << name;
    return 0;
}