// find the second largest number:
#include <bits/stdc++.h>
using namespace std;
void second_largest(int array[], int n)
{
    int largest = 0, s_largest = 0, p_largest;
    for (int i = 0; i < n; i++)
    {
        if (largest < array[i])
        {
            largest = array[i];
        }
        else if ((largest > array[i]) && (s_largest < array[i]))
        {
            s_largest = array[i];
        }
    }
    cout << "second largest  " << s_largest << "  " << largest;
}
int main()
{
    int number1, number2;
    cout << "enter the number in the array" << endl;
    cin >> number1;
    int array[number1];
    for (int i = 0; i < number1; i++)
    {
        cout << "enter your " << i + 1 << " element: ";
        cin >> array[i];
    }
    second_largest(array, number1);
    return 0;
}