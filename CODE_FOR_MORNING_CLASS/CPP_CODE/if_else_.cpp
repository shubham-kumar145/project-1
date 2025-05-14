#include <iostream>
using namespace std;
int main()
{
    cout << "**********************************************************************************" << endl
         << "1.  Write a C program to check whether a given integer is even or odd using if-else Statement." << endl
         << "2.  Write a C program to find the maximum of two integers using if-else statement." << endl
         << "3.  Write a C program to check whether a given integer is positive, negative or zero using if-else statement." << endl
         << "4.  Write a C program to check whether a given integer is a multiple of 3 using if-else statement." << endl
         << "5.  Write a C program to check whether a given year is a leap year or not using if-else statement." << endl
         << "6.  Write a C program to check whether a given integer is divisible by both 3 and 5 using if-else statement." << endl
         << "7.  Write a C program to sort three integers in ascending order using if-else statements." << endl
         << "8.  Write a C program to find maximum between two numbers" << endl
         << "9.  Write a C program to check whether a number is divisible by 5 and 11 or not" << endl
         << "10. Write a C program to check whether a number is even or odd" << endl
         << "11. Write a C program to input cost price and selling price of a product and check profit or Loss." << endl
         << "12. Write a C program to check whether a given year is a leap year or not using conditional Operator." << endl
         << "13. Write a C program to check whether triangle is valid or not if angles are given." << endl
         << "*********************************************************************************" << endl;
    int number;
    cout << "enter the number:  ";
    cin >> number;
    if (number == 1)
    {
        int a;
        cout << "enter the number: ";
        cin >> a;
        if (a % 2 == 0)
        {
            cout << "it is an even number";
        }
        else
        {
            cout << "it is an odd number";
        }
    }
    else if (number == 2)
    {
        int a, b;
        cout << "enter the first number: ";
        cin >> a;
        cout << "enter the second number: ";
        cin >> b;
        if (a > b)
        {
            cout << "first number is greater than second number";
        }
        else
        {
            cout << "second number is greater than first number";
        }
    }
    else if (number == 3)
    {
        int a;
        cout << "enter the number: ";
        cin >> a;
        if (a > 0)
        {
            cout << "it is a positive number";
        }
        else if (a < 0)
        {
            cout << "it is a negative number";
        }
        else
        {
            cout << "it is equal to zero";
        }
    }
    else if (number == 4)
    {
        int a;
        cout << " enter the number: ";
        cin >> a;
        if (a % 3 == 0)
        {
            cout << "number is divisible by 3";
        }
        else
        {
            cout << "number is not divisible by 3";
        }
    }
    else if (number == 5)
    {
        int year;
        cout << "enter the year:  ";
        cin >> year;
        if (year % 4 == 0)
        {
            cout << "it is a leap year";
        }
        else
        {
            cout << "it is not a leap year";
        }
    }
    else if (number == 6)
    {
        int a;
        cout << "enter the number: ";
        cin >> a;
        if ((a % 3 == 0) && (a % 5 == 0))
        {
            cout << "it is divisible by 3 and 5";
        }
        else
        {
            cout << "it is not divisible by 3 and 5";
        }
    }
    else if (number == 7)
    {
        int a, b, c;
        cout << "enter the 1st number:  ";
        cin >> a;
        cout << "enter the 2nd number:  ";
        cin >> b;
        cout << "enter the 3rd number:  ";
        cin >> c;
        if (a > b)
        {
            if (a > c)
            {
                if (b > c)
                {
                    cout << "assending order: " << c << " " << b << " " << a;
                }
                else
                {
                    cout << "assending order: " << b << " " << c << " " << a;
                }
            }
            else
            {
                cout << "assending order: " << b << " " << a << " " << c;
            }
        }
        else //(a < b)
        {
            if (b > c)
            {
                if (a > c)
                {
                    cout << "assending order: " << c << " " << a << " " << b;
                }
                else
                {
                    cout << "assending order: " << a << " " << c << " " << b;
                }
            }
            else
            {
                cout << "assending order: " << a << " " << b << " " << c;
            }
        }
    }
    else if (number == 8)
    {
        float a, b;
        cout << "enter hhe 1st number: ";
        cin >> a;
        cout << "enter the 2nd number: ";
        cin >> b;
        if (a > b)
        {
            cout << "1st number is greater than 2nd number";
        }
        else
        {
            cout << " 2nd number is greater than 1st number";
        }
    }
    else if (number == 9)
    {
        int a;
        cout << "enter the number: ";
        cin >> a;
        if ((a % 5 == 0) && (a % 11 == 0))
        {
            cout << "number is divisible by 5 and 11";
        }
        else
        {
            cout << "number is not divisible by 5 and 11";
        }
    }
    else if (number == 10)
    {
        int a;
        cout << "enter the number: ";
        cin >> a;
        if (a % 2 == 0)
        {
            cout << "it is an even number";
        }
        else
        {
            cout << "it is an odd number";
        }
    }
    else if (number == 11)
    {
        int cp, sp;
        cout << "enter the cost price";
        cin >> cp;
        cout << "enter the selling price";
        cin >> sp;
        if (cp > sp)
        {
            cout << "loss";
            ;
        }
        else
        {
            cout << "profit";
        }
    }
    else if (number == 12)
    {
        int year;
        cout << "enter the year";
        cin >> year;
        cout << "1 means yes and 0 means no: " << (year % 4 == 0);
    }
    else if (number == 13)
    {
        int a, b, c;
        cout << "enter the 1st side of the triangle: ";
        cin >> a;
        cout << "enter the 2nd side of the triangle: ";
        cin >> b;
        cout << "enter the 3rd side of the triangle: ";
        cin >> c;
        if ((a + b) > c)
        {
            cout << "valid";
        }
        else if ((c + b) > a)
        {
            cout << "valid";
        }
        else if ((a + c) > b)
        {
            cout << "valid";
        }
        else
        {
            cout << "invalid";
        }
    }
    else
    {
        cout << "enter the correct number";
    }
    cout << "\n**********************************************************************************";
    return 0;
}