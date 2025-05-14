#include<bits/stdc++.h>
using namespace std;
void print(int i,int sum){
    if (i<1){
        cout << sum << endl;
        return;
    }
    print(i-1,sum +i);
}
int print1(int n){
    if (n==0){
        return 0;
    }
    return (n + print1(n-1));
}
int main (){
    int n;
    cin >> n;
    int sum = print1(n);
    cout << sum;
//    print(n,0);
    return 0 ;

}