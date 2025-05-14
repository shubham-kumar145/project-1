#include<bits/stdc++.h>
using namespace std;
int main(){
    string m,n;
    cin >> m>>n;
    int size=m.length();
    for(int i=0;i<size;i++){
        if(tolower(m[i])-tolower(n[i]) > 0 ){
            printf("1");
            return 0;
        }
        else if (tolower(m[i])-tolower(n[i]) < 0)
        {
            printf("-1");
            return 0;
        }
    }
    printf("0");
    return 0;
}