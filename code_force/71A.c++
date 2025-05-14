#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string array[n];

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        int size = name.size();
        if (size > 10)
        {
            array[i] = name[0] + to_string(size - 2) + name[size - 1];
        }
        else
        {
            array[i] = name;
        }
    }

    for (string x : array)
    {
        cout << x << endl;
    }

    return 0;
}
