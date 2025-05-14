// WRITE A PROGRAM TO FIND THE HCF FOR THE n NUMBER
#include<iostream>
using namespace std;
bool ch=false;
void input(int array[],int number){
    for (int i=0;i<number;i++){
        cout << "enter the "<<i+1<<" number:  ";
        cin >> array[i];
        if (array[i]==1){
            ch = true;
        }
    }
}
int main (){
    int number,rem,div,que;
    cout << "enter the total number you want to enter ";
    cin >> number;
    int array[number];
    input(array,number);
    if (ch == true) {
        cout << "HCF will be :- 1";
        return 0;;
    }
    // sort(array,number);
    div=array[0];
    for (int i=0;i<number;i++){
        que=array[i];
        rem = div;
        while (rem !=0){
            rem = que%div;
            que=div;
            if (rem !=0){
                div =rem;
            }
            if (rem == 1){
                cout << "hcf of the number is: 1"<< endl;
                return 0;
            }
        }
    }
    cout << "HCF of the number is:  "<<que<<endl;
    cout << "*********************************************";
    return 0;
}


// void sort(int array[],int n){
//     for(int i = n-1;i>0;i--){
//         for (int j=0;j<i;j++){
//             if (array[j]>array[j+1]){
//                 swap(array[j],array[j+1]);
//             }
//         }
//     }
// }