#include<iostream>
// #include<bits/stdc++.h>
using namespace std;
class classgt{
    int a,b;
    public:
        classgt(){
            a=5;
            b=6;
            cout << "default caonstuctor" <<endl; 
        }
        classgt(int x ,int y){
            a=x;
            b=y;
            cout<< "parameterize caonstuctor" <<endl; 
        }
    void display();

};
void classgt::display(){
    cout << a<< endl;
    cout << b<< endl;
}
int main (){
    classgt o1;
    o1.display();
    classgt o2(12,23);
    o2.display();
    cout <<"fdf";
    return 0;
}