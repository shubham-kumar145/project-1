#include<iostream>
using namespace std;
class time1
{
    int hour,min,sec;
    public:
        void getvalue();
        void show(){
            cout << "\nhour: "<<hour<<"\nmin: "<<min<<"\nsec: "<<sec;
        }
        time1 operator+(time1);
};
time1 time1::operator+(time1 t)
{
    int n1,n2,n3;
    time1 ttt;
    n1=(sec + t.sec)/60;
    ttt.sec=(sec + t.sec)%60;
    n2 = (min + t.min + n1)/60;
    ttt.min=(min + t.min + n1)%60;
    // n3=(hour + t.hour + n3)
    ttt.hour=(hour + t.hour + n2);
    return ttt;
}
void time1::getvalue(){
    cout << "enter the hour: ";
    cin >> hour;
    cout << "enter the min: ";
    cin >> min;
    cout << "enter the sec: ";
    cin >> sec;
}
int main(){
    time1 c1,c2,c3;
    cout << "************************************************\n";
    cout << "enter the value for the first class: "<<endl;
    c1.getvalue();
    cout << "enter the value for the second class: "<<endl;
    c2.getvalue();
    c3=c1+c2;
    cout << "***********************************************\n";
    cout << "\nvalue of the first object: ";
    c1.show();
    cout << "\nvalue of the second object: ";
    c2.show();
    cout << "\nsum of time of first object and time of second object: ";
    c3.show();
    return 0;
}