#include<bits/stdc++.h>
using namespace std;
int main(){
    int number,diviser,rem,ques;
    while (number%diviser!=0){
        rem=number%diviser;
        ques=number/diviser;
        number=ques;
        diviser=rem;
    }
    cout<< "lcm is"<<
    return 0;
}