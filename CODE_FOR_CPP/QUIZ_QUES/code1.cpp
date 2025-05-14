#include <bits/stdc++.h>
using namespace std;
void loki(vector<int> &list,int array[],int i,int n){
    int sum1=0,sum2=0,sum3=0;
    for (int j=i;j<n;j++){
        for (int k=n;k>j;k--){
            for (int q=0;q<i;q++){
                sum1=sum1+array[q];
            }
            for (int q=j;q<k;q++){
                sum2=sum2+array[q];
            }
            for (int q=k;q<n;q++){
                sum3=sum3+array[q];
            }
            list.push_back(sum1+sum2+sum3);
        }
    }
    int hash[*max_element(list.begin(), list.end())];
    for (int i=0;i<*max_element(list.begin(), list.end());i++){
        hash[list[i]]++;
    }int largest=0;
    for (int i=0;i<*max_element(list.begin(), list.end());i++){
        if (largest<hash[i]){
            largest=hash[i];
        }
    }
    cout << "number of ways  "<< largest;
}


int main() {
    
    int number1;
    cin >> number1;
    int array[number1];
    vector<int> list;
    for (int i=0;i<number1;i++){
        cin >> array[i];
    }  
    loki(list,array,2,number1-1);
    return 0;
}
