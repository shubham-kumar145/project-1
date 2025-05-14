#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    cout << "******************************************************************************************"<<endl<<
    "1.  Write a C program to perform addition of two integers using the '+' operator." << endl<<
    "2.  Write a C program to perform subtraction of two integers using the '-' operator."<< endl<<
    "3.  Write a C program to perform multiplication of two integers using the '*' operator."<< endl<<
    "4.  Write a C program to perform division of two integers using the '/' operator."<< endl<<
    "5.  Write a C program to perform modulo operation on two integers using the '%' operator."<< endl<<
    "6.  Write a C program to perform increment operation on an integer using the '++' operator."<< endl<<
    "7.  Write a C program to perform decrement operation on an integer using the '--' operator."<< endl<<
    "8.  Write a C program to perform logical AND operation on two integers using the '&&' operator "<< endl<<
    "9.  Write a C program to perform logical OR operation on two integers using the '||' operator." << endl << 
    "10. Write a C program to perform logical NOT operation on an integer using the '!' operator."<< endl << 
    "11. Write a C program to swap two integers without using a third variable using Arithmetic operators."<< endl << 
    "12. Write a C program to perform bitwise left shift operation on an integer using the '<<' operator."<< endl << 
    "13. Write a C program to perform bitwise right shift operation on an integer using the '>>' operator." << endl <<
    "14. Write a C program to swap two integers without using a third variable using bitwise XOR operator." <<  endl<<
    "15. Write a C program to find the area of a circle using the '*' and '/ ' operator "<< endl<<
    "**********************************************************************"<<endl;
    int number,a, b, c, d;
    cout << " enter the choise you want to perform "<< endl;
    cin  >> number;
    if (number == 1)
    {
        cout << "enter 1st numbers ";
        cin  >> a;
        cout << "enter 2nd numbers ";
        cin  >> b;
        cout << " sum of the a and b is : " << a + b << endl;
    }
    else if (number == 2)
    {
        cout << "enter 1st numbers ";
        cin  >> a;
        cout << "enter 2nd numbers ";
        cin  >> b;
        cout << " subtraction of a and b is: " << a - b << endl;
    }
    else if (number == 3)
    {
        cout << "enter 1st numbers ";
        cin  >> a;
        cout << "enter 2nd numbers ";
        cin  >> b;
        cout << " multipication of the a and b is : " << a * b << endl;
    }
    else if (number == 4)
    {
        cout << "enter 1st numbers ";
        cin  >> a;
        cout << "enter 2nd numbers ";
        cin  >> b;
        cout << " division of a and b is : " << a / b << endl;
    }
    else if (number == 5)
    {
        // using modulus operator
        cout << "enter 1st numbers ";
        cin  >> a;
        cout << "enter 2nd numbers ";
        cin  >> b;
        cout << " remender of the a and b is : " << a % b << endl;
    }
    else if (number == 6)
    {
        // using ++ increment operator
        cout << "enter the number ";
        cin  >> a;
        a++;
        cout << " after using increment operator" << a << endl;
    }
    else if (number == 7)
    {
        // using -- decrement operator
        cout << "enter the number ";
        cin  >> a;
        a--;
        cout << " after using decrement operator " << a << endl;
    }
    else if (number == 8)
    {
        // using and (&&) operator
        cout << "enter the 1st number ";
        cin  >> a;
        cout << "enter the 2nd number ";
        cin  >> b;
        cout << "enter the 3rd number ";
        cin  >> c;
        cout << "enter the 4th number ";
        cin  >> d;
        cout << "checking wheather number 1 , number 3 and number2 ,number4 are equal to each other:";
        if ((a==c)&&(b==d)){
            cout << "yes it is equal to each other "<< endl;
        }
        else {
            cout << " not equal";
        }
    }
    else if (number == 9)
    {
        // using or (||) operator
        cout << "enter the 1st number ";
        cin  >> a;
        cout << "enter the 2nd number ";
        cin  >> b;
        cout << "enter the 3rd number ";
        cin  >> c;
        cout << "enter the 4th number ";
        cin  >> d;
        cout << "checking wheather one of them is equal to each other between (number 1 , number 3 and number2 ,number4):";
        if ((a==c)||(b==d)){
            cout << "yes it is one of them is equal to each other "<< endl;
        }
        else {
            cout << " not equal";
        }
    }
    else if (number ==10){
        cout << "enter 1st number";
        cin  >> a;
        cout << "enter 2nd number";
        cin  >> b;
        c    =    !(a==c);
        cout << "answer will be oppsite to the correct answer: "<<c;
    }
    else if (number == 11){
        cout << "enter the 1st number ;";
        cin >> a;
        cout << "enter the 2nd number ;";
        cin >> b;
        a=(a+b)-(b=a);
        cout <<"your first number is : "<< a<< endl;
        cout <<"your second number is : "<< b;
    }
    else if (number == 12)
    {
        cout << "left shift operator"<<endl;
        int a,b,c;
        cout << "enter the number: ";
        cin  >> a;
        cout << "how much you want to left shift: ";
        cin  >> b;
        c = a << b;//(a/(pow(2,b)));
        cout << "answer of the question is: "<<c;
    }
    else if (number == 13)
    {
        cout << "right shift operator"<<endl;
        int a,b,c;
        cout << "enter the number: ";
        cin  >> a;
        cout << "how much you want to right shift: ";
        cin  >> b;
        c = a >> b ;  //(a*(pow(2,b)));
        cout << "answer of the question is: "<<c;
    }
    else if (number == 14)
    {
        cout << "swapping two number by bitwise XOR operator"<<endl;
        int a,b;
        cout << "enter the 1st number: ";
        cin  >> a;
        cout << "enter the 2nd number: ";
        cin  >> b;
        a = a^b;
        b = a^b;
        a = a^b;
        cout << "value of the 1st number: "<<a<<endl;
        cout << "value of the 2nd number: "<<b<<endl;
    }
    else if (number == 15){
        cout << " enter the radius of the circle :";
        cin >> a;
        int pi=22/7;
        int area= pi * a*a;
        cout << " area of the circle is : "<< area<< endl;
    }
    else
    {
        cout << "enter the correct number";
    }
    cout << "\n******************************************************************";
    return 0;
}