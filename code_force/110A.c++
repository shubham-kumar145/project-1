#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int luckyCount = 0;
    while (number)
    {
        int digit = number % 10;
        if (digit == 4 || digit == 7)
        {
            luckyCount++;
        }
        number /= 10;
    }
    if (luckyCount == 4 || luckyCount == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
