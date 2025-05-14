#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int rem, rev = 0;
    while (x > 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    cout<< rev;
    return 0;
}