#include<iostream>
using namespace std;
class complex{
    public:
    int a,b;
    complex(){
        cout << "\n***********************************\n";
    }
    complex(int n1,int n2){
        a=n1;
        b=n2;
    }
    void get(){
        cout << "enter the value for 'a': ";
        cin >> a;
        cout << "enter the value for 'b': ";
        cin >>b;
    }
    complex operator+(complex);
    void display(){
        cout << "value of 'a' :"<<a<<" and value of b is: "<< b<< endl;
    }
};
complex complex::operator+(complex temp1){
    complex temp;
    temp.a=a+temp1.a;
    temp.b=b+temp1.b;
    return temp;
}

void geta(){
    int n1;
    cout << "enter the value for a: ";
    cin >>n1;
}
void getb(){
    int n2;
    cout << "enter the value for b: ";
    cin >>n2;
}
int main(){
    complex o3,o1,o2;
    o1.get();
    o2.get();
    // complex o1(void geta(),void getb());
    // complex o2(void geta(),void getb());
    o3=o1+o2;
    o1.display();
    o2.display();
    o3.display();
    return 0;
}