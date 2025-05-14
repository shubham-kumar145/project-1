#include<iostream>
using namespace std;

bool ch = false;

void input(int array[], int number){
    for (int i = 0; i < number; i++){
        cout << "Enter the " << i + 1 << " number: ";
        cin >> array[i];
        if (array[i] == 1){
            ch = true;
        }
    }
}

void sort(int array[], int n){
    for(int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (array[j] > array[j + 1]){
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main (){
    int number;
    cout << "Enter the total number you want to enter: ";
    cin >> number;
    int array[number];
    input(array, number);
    
    if (ch == true) {
        cout << "HCF will be: 1" << endl;
        return 0;
    }
    
    sort(array, number);
    int rem, div, que;
    div = array[0];
    
    for (int i = 0; i < number; i++){
        que = array[i];
        rem = div;
        while (rem != 0){
            rem = que % div;
            que = div;
            if (rem != 0){
                div = rem;
            }
        }
        if (div == 1){
            cout << "HCF of the numbers is: 1" << endl;
            return 0;
        }
    }
    cout << "HCF of the numbers is: " << div << endl;
    cout << "*********************************************" << endl;
    return 0;
}
