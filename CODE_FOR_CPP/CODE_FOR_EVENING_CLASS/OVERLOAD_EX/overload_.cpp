#include<iostream>
using namespace std;
class Add
{
    int a,b;
    public:
        void getvalue();
        void show()
        {
            cout << a << " and " << b<< endl;
        }
        Add operator +(Add);
};
Add Add::operator+(Add val)
{
    Add t;
    t.a = a + val.a;
    t.b = b + val.b;
    return t;
}
void Add::getvalue(){
    cout <<" enter the 1st number: ";
    cin >> a;
    cout << " enter the 2nd number: ";
    cin >>b;
}
int main(){
    Add q,w,e;
    cout << " enter the value for 1st object "<<endl;
    q.getvalue();
    cout << " enter the value for 2nd object "<<endl;
    w.getvalue();
    e=q+w;
    cout<<"First Object value"<<endl;
    q.show();
    cout<<"Second Object value"<<endl;
    w.show();
    cout<<"Object value after adding Object1 + Object2"<<endl;
    e.show();
    return 0;
}