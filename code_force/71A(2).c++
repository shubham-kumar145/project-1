#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        int size = name.size();
        if (size > 10)
        {
            cout<< name[0] + to_string(size - 2) + name[size - 1]<<endl;
        }
        else
        {
            cout<< name<<endl;
        }
    }
    return 0;
}
