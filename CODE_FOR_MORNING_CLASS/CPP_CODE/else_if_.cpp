#include<iostream>
using namespace std;
int main(){
    cout << "*******************************************************************"<<endl<<
    "1.Write a C program to check whether a year is leap year or not."<<endl<<
    "2.Write a C program to input a character from user and check whether the given character is alphabet or not."<<endl<<
    "3. Write C Program to input a character from user and check whether it is vowel or consonant"<<endl<<
    "4.Write a C program to input a character from user and check whether given character is alphabet, digit or special character"<<endl<<
    "5.Write a C program to input character from user and check whether character is uppercase or lowercase alphabet"<<endl<<
    "6.Write a C program to input side of a triangle and check whether triangle is valid or not ."<<endl<<
    "7..Write a C program to input sides of a triangle and check whether a triangle is equilateral,scalene or isosceles triangle"<<endl<<
    "8.Write a C program to input marks of five subjects Physics, Chemistry, Biology,Mathematics and Computer, calculate percentage and grade according to given conditions:"<<endl<<
    "If percentage >= 90% : Grade A\nIf percentage >= 80% : Grade B\nIf percentage >= 70% : Grade C\nIf percentage >= 60% : Grade D\nIf percentage >= 40% : Grade E\nIf percentage <  40% : Grade F"<<endl<<
    "9. Write a C program to input basic salary of an employee and calculate gross salary according to given conditions."<<endl<<
    "Basic Salary <= 10000 : HRA = 20%, DA = 80%\nBasic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%\nBasic Salary >= 20001 : HRA = 30%, DA = 95%"<<endl<<
    "10.Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:"<<endl<<
    "For first 50 units Rs. 0.50/unit\nFor next 100 units Rs. 0.75/unit\nFor next 100 units Rs. 1.20/unit\nFor unit above 250 Rs. 1.50/unit\nAn additional surcharge of 20% is added to the bill."<<endl<<
    "*******************************************************************\n";
    int number,a,b,c,d,e;
    cout << "enter the number: ";
    cin  >> number;
    if (number == 1)
    {
        cout << "enter the year";
        cin  >> a;
        if (a<=0){
            cout << "enter the correct value: ";
        }
        else if (a % 4 == 0){
            cout << "it is a leap year: ";
        }
        else 
        {
            cout << "it is not an leap year";
        }
    }
    else if (number == 2)
    {
        char ch;
        cout << "enter one character :  ";
        cin  >> ch;
        if ((ch >= 'a')&&(ch <= 'z'))
        {
            cout << "it is a lowercase character";
        }
        else if ((ch >= 'A')&&(ch <= 'Z'))
        {
            cout << "it is an uppercase character";
        }
        else
        {
            cout << "it is not a character";
        }
    }
    else if (number == 3)
    {
        char ch;
        cout << "enter one character: ";
        cin  >> ch;
        if ((ch >= 'a')&&(ch <= 'z'))
        {
            if ((ch == 'a')||(ch == 'i')||(ch == 'e')||(ch == 'o')||(ch == 'u'))
            {
                cout << "it is an vowel";
            }
            else
            {
                cout << "it is not an vowel";
            }
        }
        else if ((ch >= 'A')&&(ch <= 'Z'))
        {
            if ((ch == 'A')||(ch == 'E')||(ch == 'I')||(ch == 'U')||(ch == 'O'))
            {
                cout << "it is an vowel";
            }
            else
            {
                cout << "it is not an vowel";                
            }
        }
        else
        {
            cout << "it is not a character";
        }
    }
    else if (number == 4)
    {
        char ch;
        cout << "enter one character: ";
        cin  >> ch;
        if ((ch >= 'a')&&(ch <= 'z'))
        {
            cout << "it is an alphabet";
        }
        else if ((ch >= 'A')&&(ch <= 'Z'))
        {
            cout << "it is an alphabet";
        }
        else
        {
            cout << " it is a digit or special character";
        }
    }
    else if (number == 5)
    {
        char ch;
        cout << "enter one character";
        cin >> ch;
        if ((ch >= 'a')&&(ch <= 'z'))
        {
            cout << "it is an alphabet";
        }
        else if ((ch >= 'A')&&(ch <= 'Z'))
        {
            cout << "it is an alphabet";
        }
        else
        {
            cout << " enter the correct character";
        }
    }
    else if (number == 6)
    {
        cout << "enter the fisrt side of the triangle: ";
        cin  >> a;
        cout << "enter the second side of the triangle: ";
        cin  >> b;
        cout << "enter the third side of the triangle: ";
        cin  >> c;
        if ((a+b)>=c)
        {
            cout << "it is valid";
        }
        else if ((b+c)>=a)
        {
            cout << "it is valid";
        }
        else if ((a+c)>=b)
        {
            cout << "it is valid";
        }
        else 
        {
            cout << "not valid";
        }
    }
    else if (number == 7)
    {
        cout << "enter the 1st side of the triangle: ";
        cin  >> a;
        cout << "enter the 2nd side of the triangle: ";
        cin  >> b;
        cout << "enter the 3rd side of the triangle: ";
        cin  >> c;
        if (((a+b)>=c)||((b+c)>=a)||((a+c)>=b))
        {
            if ((a == b)&&(b == c)&&(a == c))
            {
                cout << "triangle is an equilateral";
            }
            else if ((a == b)||(b == c)||(a == c))
            {
                cout << "triangle is a scalene";
            }
            else
            {
                cout << "triangle is an isosceles";
            }
        }
        else
        {
            cout << "invalid triangle";
        }
    }
    else if (number == 8)
    {
        float m1,m2,m3,m4,m5;
        cout << "enter the marks of physics: ";
        cin  >> m1;
        cout << "enter the marks of chemistry: ";
        cin  >> m2;
        cout << "enter the marks of biology: ";
        cin  >> m3;
        cout << "enter the marks of mathematics: ";
        cin  >> m4;
        cout << "enter the marks of computer: ";
        cin  >> m5;
        float f = ((m1+m2+m3+m4+m5)/500)*100;
        cout << "percentage = "<<f<<endl;
        cout << "your grade is:  ";
        if (f >= 90)
        {
            cout << "A";
        }
        else if (f >= 80)
        {
            cout << "B";
        }
        else if (f >= 70)
        {
            cout << "C";
        }
        else if (f >= 60)
        {
            cout << "D";
        }
        else if (f >= 40)
        {
            cout << "E";
        }
        else
        {
            cout << "F";
        }
    }
    else if (number == 9)
    {
        int salary;
        cout << "enter your basic salary:  ";
        cin  >> salary;
        if (salary<=10000)  
        {
            cout<<"gross salary: "<<(salary+(salary*2)+(salary*8));
        }
        else if ()
        {
            /* code */
        }
        
        
    }
    else if (number == 10)
    {
        cout << "enter the electricity unit charge: ";
        cin  >> a;
        if (a <= 50)
        {
            b=a*(.5);
        }
        else if (a <= 100)
        {
            b=50*.50 + (a-50)*.75;
        }
        else if (a <= 150)
        {
            b=50*.50 + 100*.75 + (a - 150)*1.20;
        }
        else if (a <= 250)
        {
            b=50*.50 + 100*.75 + 150*1.20 + (a - 250)*1.50;
        }
        else
        {
            cout << "enter the correct value: ";
        }
        c=.20*b;
        cout << "total electricity bill: "<<b+c;            
    }
    else
    {
        cout << "enter the correct number: ";
    }
    cout << "\n*******************************************************************";
    return 0;
}