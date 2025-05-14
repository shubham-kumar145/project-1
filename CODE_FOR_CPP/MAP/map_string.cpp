#include <bits/stdc++.h>
using namespace std;
int main (){
    string word;
    cin >> word;
    map<char,int>mpp;
    for (int i =0;i<word.size();i++){
        mpp[word[i]]++;
    }
    for (auto it :mpp){
        cout << it.first << "   "<< it.second<<endl;
    }
    int number;
    cin >> number;
    while (number--){
        char c;
        cin >> c;
        cout << c<<"   "  << mpp[c]<<endl;
    }
    return 0;
}