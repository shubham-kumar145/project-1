#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
	int b,count = 0;
	while (n>0){
    	b = n%10;
    	if (n%b==0){
        	count =+1;
	    }
	    n = n/10;
    }
	cout << count;
	return 0;	
}
int main(){
    int n;
    cin >> n;
    countDigits(n);
    return 0;
}