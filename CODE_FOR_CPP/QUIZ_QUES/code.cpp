#include<bits/stdc++.h>
using namespace std;
int s_largestnumber(vector<int> &a,int n){
    int largest=a[0];
    int s_largest=-1;
    for (int i =0 ;i<n;i++){
        if (largest<a[i]){
            s_largest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>s_largest){
            s_largest=a[i];
        }
    }
    return s_largest;
}
int s_smallestnumber(vector<int> &a ,int n){
    int smallest=a[0];
    int s_smallest=INT_MAX;
    for (int i=0;i<n;i++){
        if (smallest>a[i]){
            s_smallest=smallest;
            smallest=a[i];
        }
        else if (smallest != a[i]  && s_smallest > a[i] ){
            s_smallest = a[i];
        }
    }
    return s_smallest;
}



int main(){
    int number,number1;
    cin >> number;
    vector<int> a;
    for (int i=0;i<number;i++){
        cin >> number1;
        a.push_back(number1);
    }
    int s_largest=s_largestnumber(a,number);
    int s_smallest=s_smallestnumber(a,number);
    cout << s_largest<<endl<<s_smallest;
}
