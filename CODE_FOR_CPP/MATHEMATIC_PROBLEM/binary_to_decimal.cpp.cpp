#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
    int b,count1 =0;
    int q=n;
    while (n>0){
        b = n%10;
        if (q%b==0){
            count1 =count1+1;
        }
        n = n/10;
    }
    return count1;
    
}	
int countDigits1(int n){
    long b,a=0 ;
    while(n>0){
        b=n%10;
        n/=10;
        a=(a*10)+b;
    }
    while(n<0){
        b=n%10;
        n/=10;
        a=(a*10)+b;
    }
    if(a>INT_MAX || a<INT_MIN) 
    return 0;
    return a;
}


int main (){
    long n;
    cin >> n;
    int r= countDigits1(n);
    cout << r;
    return 0;
}