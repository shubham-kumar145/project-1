#include<bits/stdc++.h>
using namespace std;
int main(){
    int number,diviser,rem,ques;
    cout << "enter the two number "<<endl;
    cin >> number>>diviser;
    while (number%diviser!=0){
        rem=number%diviser;
        ques=number/diviser;
        number=ques;
        diviser=rem;
    }
    cout << "hcf of the number  "<<diviser<<endl;
    return 0;
}