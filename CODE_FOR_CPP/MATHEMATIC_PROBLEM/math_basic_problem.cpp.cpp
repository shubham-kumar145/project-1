#include <bits/stdc++.h>
using namespace std;
void star (int number){
    for (int i = 0; i<number;i++){
        for (int k = 0;k<i;k++){
            cout << " ";
        }
        for (int k = 0;k<2*(number-i)-1;k++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern1(int number){
    for (int i =0 ;i <number;i++){
        int a = 11 - i;
        int b=a;
        for (int j = 0 ;j < number-i;j++){
            cout << "   ";
        }
        for (int k = 0;k < i;k++){
            if (11-k < 10){
                cout << "0"<<11-k<<" ";
            }
            else{
                cout << 11-k<<" ";
            }
        }

        for (int l =0;l<i-1;l++){
            if (b+l+2 < 10){
                cout << "0"<<b+l+2<<" ";
            }
            else{
                cout << b+l+2<<" ";
            }
        }
        cout << endl;
    }
}
void divisior(int number){
    vector<int> list1;
    for(int i=1;(i*i)<number;i++){
        if (number %i==0){
            list1.push_back(i);
            if ((number/i) != i ){
                list1.push_back(number/i);
            }
        }
    }
    sort(list1.begin(),list1.end());
    for (auto it : list1) {
        cout << it <<" ";
    } 
}
void prime(int number){
    int count=0;
    for (int i=2 ;i<=number;i++){
        if (number%i==0){
            count+=1;
        }
    }
    if (count==1){
        cout << "prime"<<endl;
    }
    else cout << "not prime";
}
void prime1(int number){
    int count =0;
    for (int i =1;(i*i)<number;i++){
        if (number%i==0){
            count+=1;
            if ((number/i)!=i){
                count+=1;
            }
        }
    }
    if (count==2){
        cout << "prime";
    }
    else{
        cout << "not prime";
    }
}
void GCD(int number){
    int s_number;
    for (int i =0;(i*i)<number;i++){
        
    }
}

int main(){
    int number;
    cin >> number;
    prime1 (number);
    return 0;
}