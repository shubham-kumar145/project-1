#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = 1;
    c += a++ * 5 - --b;
    cout <<c;

    return 0;
}