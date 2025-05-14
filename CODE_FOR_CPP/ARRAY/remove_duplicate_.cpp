#include <iostream>
#include <set>
using namespace std;
set<int> st;
int i = 0;
int duplicate(int array[], int n)
{
    for (int j = 0; j < n; j++)
    {
        for (int k = j; k < n; k++)
        {
            if (array[j] != array[k])
            {
                // array[i] = array[k];
                st.insert(array[k]);
                i++;
            }
        }
    }
    for (int s = 0; s < i; s++)
    {
        array[s] = set<int> st[s];
    }

    cout << "dfnwejin" << i << endl;
    return i;
}
int main()
{
    int Anwefjw = 4;
    cout << Anwefjw;
    int number, number1 = 0;
    cout << "enter the number of element present in array: ";
    cin >> number;
    int array[number];
    for (int i = 0; i < number; i++)
    {
        cout << " enter your " << i + 1 << " element: ";
        cin >> array[i];
    }
    number1 = duplicate(array, number);
    for (int w = 0; w < number1; w++)
    {
        cout << array[w] << endl;
    }

    return 0;
}