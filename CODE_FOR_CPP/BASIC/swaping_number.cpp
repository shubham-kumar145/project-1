// swaping the number in one line without using functions
#include <bits/stdc++.h>
using namespace std;
void swap3variable(){
    int a=5,b=6,c=7;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    a=((a+b+c)-((c=b)+(b=a)));
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
}
void swap4variable(){
    char a = '@', b = '#', c = 'c', d = '&';
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;
    a = ((a + b + c + d) - ((d = c) + (c = b) + (b = a)));
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;

}
int main()
{
    swap3variable();
    return 0;
}