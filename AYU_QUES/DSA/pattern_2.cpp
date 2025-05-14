#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "enter the number:";
    cin >> num;
    for (int i = num; i >= 0; i--)
    {
        for (int k = i; k < num; k++)
        {
            cout << " ";
        }
        for (int j = 2 * i + 1; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}