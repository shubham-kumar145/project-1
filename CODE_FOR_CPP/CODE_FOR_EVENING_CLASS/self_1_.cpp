#include<iostream>
using namespace std;
class equal1
{
    int a,b;
    public:
        void getvalue();
        void show()
        {
            cout << a << " and " << b<< endl;
        }
        equal1 operator +(equal1);
};
equal1 equal1::operator=()
{
    equal1 t;
    t.a = a + val.a;
    t.b = b + val.b;
    return t;
}
void equal1::getvalue(){
    cout <<" enter the 1st number: ";
    cin >> a;
    cout << " enter the 2nd number: ";
    cin >>b;
}
int main(){
    equal1 w,e;
    cout << " enter the value for 1st object "<<endl;
    w.getvalue();
    e=e=w;
    cout<<"Second Object value"<<endl;
    w.show();
    cout<<"Object value after adding Object1 + Object2"<<endl;
    e.show();
    return 0;
}