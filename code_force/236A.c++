#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,n;
    cin >> str;
    set<char> unique_chars(str.begin(), str.end());
    for (char c : unique_chars) {
        n += c; 
    }
    if(n.length()%2==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
    return 0;
}