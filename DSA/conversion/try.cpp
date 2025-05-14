#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,sum,rem;
    cin >> num;
    while (num > 9)
    {
        sum = 0;
        while (num > 0)
        {
            rem = num % 10;
            num /= 10;
            sum = sum + rem;
        }
        num = sum;
    }
    cout << sum;
    return 0;
}