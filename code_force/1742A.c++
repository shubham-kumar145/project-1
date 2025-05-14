#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a;
    string s[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b >> c >> d;
        if (b + c == d || c + d == b || b + d == c)
        {
            s[i] = 'YES';
        }
        else
        {
            s[i] = 'NO';
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << s[i]<<endl;
    }
    
    return 0;
}