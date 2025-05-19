#include <bits/stdc++.h>
using namespace std;
int root(int num)
{
    int end = num, start = 1, mid;
    while (end > start)
    {
        mid = (end + start) / 2;
        if (mid * mid == num)
        {
            return mid;
        }
        else if (mid*mid > num){
            end = mid;
        }
        else{
            start= mid;
        }
    }
}
int main()
{
    int num;
    cin >> num;
    cout << root(num);
    return 0;
}