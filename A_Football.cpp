#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;
    int sum = 0;
    for (int i = 0; i < name.length() - 1; i++)
    {
        if (name[i] == name[i + 1])
        {
            sum++;
            if (sum == 6)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}