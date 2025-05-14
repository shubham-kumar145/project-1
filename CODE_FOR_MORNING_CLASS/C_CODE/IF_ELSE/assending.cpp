#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the 1st number:  ";
    cin >> a;
    cout << "enter the 2nd number:  ";
    cin >> b;
    cout << "enter the 3rd number:  ";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            if (b > c)
            {
                cout << "marks order: " << c << " " << b << " " << a;
            }
            else
            {
                cout << "marks order: " << b << " " << c << " " << a;
            }
        }
        else
        {
            cout << "marks order: " << b << " " << a << " " << c;
        }
    }
    else //(a < b)
    {
        if (b > c)
        {
            if (a > c)
            {
                cout << "marks order: " << c << " " << a << " " << b;
            }
            else
            {
                cout << "marks order: " << a << " " << c << " " << b;
            }
        }
        else
        {
            cout << "marks order: " << a << " " << b << " " << c;
        }
    }
    return 0;
}