#include<iostream>
using namespace std;
class equa
{
    int a,b;
    public:
        void getvalue();
        void show()
        {
            cout << a << " and " << b<< endl;
        }
        equa operator =(equa);
};
equa equa::operator=(equa val)
{
    equa t;
    t.a = val.a;
    t.b = val.b;
    return t;
}
void equa::getvalue(){
    cout <<" enter the 1st number: ";
    cin >> a;
    cout << " enter the 2nd number: ";
    cin >>b;
}
int main(){
    equa w,e;
    cout << " enter the value for 1st object "<<endl;
    w.getvalue();
    e=w;
    cout<<"first Object value"<<endl;
    w.show();
    cout<<"Object value after "<<endl;
    e.show();
    return 0;
}