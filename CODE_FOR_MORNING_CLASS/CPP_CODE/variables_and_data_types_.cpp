#include <iostream>
using namespace std;
int main()
{
    cout << "1. Write a C program to declare and initialize a variable of type int and print its value." << endl
         << "2. Write a C program to declare and initialize a variable of type float and print its value. " << endl
         << "3. Write a C program to declare and initialize a variable of type char and print its value." << endl
         << "4. Write a C program to declare and initialize a variable of type double and print its value." << endl
         << "5. Write a C program to declare two variables of type int and swap their values." << endl
         << "6. Write a C program to declare three variables of type float and find their average." << endl
         << "7. Write a C program to declare a variable of type int and check whether it is even or odd." << endl
         << "8. Write a C program to declare two variables of type float and find their product." << endl
         << "9. Write a C program to swap two integers using a third variable." << endl
         << "10.Write a C program to declare a variable of type char and convert it to uppercase" << endl
         << "11.Write a C program to declare a variable of type double and round it off to the nearest Integer.(type cast) " << endl
         << "12. Write a C program to declare two variables of type int and perform bitwise AND operation on them." << endl
         << "13. Write a C program to declare two variables of type int and perform bitwise OR operation on them." << endl
         << "14. Write a C program to declare two variables of type int and perform bitwise XOR operation on them" << endl
         << "**************************************************************************************" << endl;
    int number;
    cout << "enter the number: ";
    cin >> number;
    if (number == 1)
    {
        int a;
        cout << "enter the integer type number: ";
        cin >> a;
        cout << "your number: " << a;
    }
    else if (number == 2)
    {
        float a;
        cout << "enter the float type number: ";
        cin >> a;
        cout << "your number: " << a;
    }
    else if (number == 3)
    {
        char a;
        cout << "enter one character: ";
        cin >> a;
        cout << "your character: " << a;
    }
    else if (number == 4)
    {
        double a;
        cout << "enter the double type number: ";
        cin >> a;
        cout << "your number: " << a;
    }
    else if (number == 5)
    {
        int a, b;
        cout << "enter the 1st number: ";
        cin >> a;
        cout << "enter the 2nd number: ";
        cin >> b;
        a = (a + b) - (b = a);
        cout << " 1st number: " << a;
        cout << "2nd number: " << b;
    }
    else if (number == 6)
    {
        float a, b, c;
        cout << "enter the 1st number(float type): ";
        cin >> a;
        cout << "enter the 2nd number(float type): ";
        cin >> b;
        cout << "enter the 3rd number(float type): ";
        cin >> c;
        cout << "average of the three number: " << (a + b + c) / 3;
    }
    else if (number == 7)
    {
        int a;
        cout << "enter the number: ";
        cin >> a;
        if (a % 2 == 0)
        {
            cout << "number is an even number";
        }
        else
        {
            cout << "number is an odd number";
        }
    }
    else if (number == 8)
    {
        float a, b;
        cout << "enter the first float type number:  ";
        cin >> a;
        cout << "enter the second float type number:  ";
        cin >> b;
        cout << "product of two number is: " << a * b;
    }
    else if (number == 9)
    {
        int a, b, c;
        cout << "enter the first number:  ";
        cin >> a;
        cout << "enter the second number:  ";
        cin >> b;
        c = a;
        a = b;
        b = c;
        cout << "your first number: " << a << endl;
        cout << "your second number: " << b;
    }
    else if (number == 10)
    {
        char a;
        cout << "enter the lower case character:  ";
        cin >> a;
        a = a - 32;
        cout << "character in upper case :  " << a;
    }
    else if (number == 11)
    {
        float marks;
        cout << "enter your float value: ";
        cin >> marks;
        int marks1 = marks + .49;
        cout << "after programming: " << marks1;
    }
    else if (number == 12)
    {
        int a, b, c;
        cout << "enter the 1st number: ";
        cin >> a;
        cout << "enter the 2nd number: ";
        cin >> b;
        c = a & b;
        cout << "by using bitwise AND operations: " << c;
    }
    else if (number == 13)
    {
        int a, b, c;
        cout << "enter the 1st number: ";
        cin >> a;
        cout << "enter the 2nd number: ";
        cin >> b;
        c = a | b;
        cout << "by using bitwise OR operations: " << c;
    }
    else if (number == 14)
    {
        int a, b, c;
        cout << "enter the 1st number: ";
        cin >> a;
        cout << "enter the 2nd number: ";
        cin >> b;
        c = a ^ b;
        cout << "by using bitwise XOR operations: " << c;
    }
    cout << "\n**************************************************";
    return 0;
}