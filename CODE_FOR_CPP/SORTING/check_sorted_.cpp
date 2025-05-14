#include <iostream>
using namespace std;
void a_sorted(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            cout << "not in assending order: ";
            break;
        }
    }
        cout << "array is in assending order:";
}
void d_sorted(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] < array[i + 1])
        {
            cout << "not in decending order: ";
            break;
        }
        cout << "array is in decending order:";
    }
}
int main()
{
    int number;
    char ch;
    cout << "enter the number of elements in array: ";
    cin >> number;
    int array[number];
    for (int i = 0; i < number; i++)
    {
        cout << " enter the " << i + 1 << " element of the array: ";
        cin >> array[i];
    }
    cout << "press a for assending order and d for decending order: ";
    cin >> ch;
    if ((ch == 'a') || (ch == 'A'))
    {
        a_sorted(array, number);
    }
    else if ((ch == 'd') || (ch == 'D'))
    {
        d_sorted(array, number);
    }

    return 0;
}