#include <iostream>
using namespace std;
int main()
{
    cout << "***********************************************************" << endl
         << "1. Write a C program to check whether a given character is a vowel or consonant using switch statement." << endl
         << "2. Write a C program to implement a vending machine using switch statements." << endl
         << "3. Write a C program to implement a menu-driven calculator using switch statement for arithmetic operators and switch statement for input validation." << endl
         << "4. Write a C program to implement a state machine that controls the traffic lights using switch statement. The state machine should have three states: Red, Green and Yellow,and the transition from one state to another should follow the standard traffic rules." << endl
         << "5.Write a C program to input week number(1-7) and print the corresponding day of week Name" << endl
         << "6. Write a C program to implement a calculator using switch statement for arithmetic operators." << endl
         << "**********************************************************************" << endl;
    int number, a, b, c;
    cout << "enter the number: ";
    cin >> number;
    if (number == 1)
    {
        char ch;
        cout << "enter the character: ";
        cin >> ch;
        // a=((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='U')||(ch=='O'));
        switch (ch)
        {
        case 'a':
            cout << "it is a vowel character";
            break;
        case 'e':
            cout << "it is a vowel character";
            break;
        case 'i':
            cout << "it is a vowel character";
            break;
        case 'o':
            cout << "it is a vowel character";
            break;
        case 'u':
            cout << "it is a vowel character";
            break;
        case 'A':
            cout << "it is a vowel character";
            break;
        case 'E':
            cout << "it is a vowel character";
            break;
        case 'I':
            cout << "it is a vowel character";
            break;
        case 'O':
            cout << "it is a vowel character";
            break;
        case 'U':
            cout << "it is a vowel character";
            break;
        default:
            cout << "it is a consonant character";
            break;
        }
    }
    else if (number == 2)
    {
        int choice;
        cout << "************************************************" << endl
             << "1. Soda  - $50" << endl
             << "2. chips - $20" << endl
             << "3. candy - $5" << endl
             << "4. water - $20" << endl
             << "5. juice - $70" << endl
             << "******************************************************" << endl;
        cout << "enter the choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "You selected Soda. The price is $50\n";
            break;
        case 2:
            cout << "You selected chips. The price is $20\n";
            break;
        case 3:
            cout << "You selected candy. The price is $5\n";
            break;
        case 4:
            cout << "You selected water. The price is $20\n";
            break;
        case 5:
            cout << "You selected juice. The price is $70\n";
            break;
        default:
            cout << "you enter the wrong choice";
            break;
        }
    }
    else if (number == 3)
    {
        cout << "*****************************************************" << endl
             << "1. additions" << endl
             << "2. subtraction" << endl
             << "3. multiplication" << endl
             << "4. division" << endl
             << "******************************************************************\n";
        int choice;
        cout << "enter your choice: ";
        cin >> choice;
    }
    else if (number == 4)
    {
        cout << "Write a C program to implement a state machine that controls the traffic lights using switch statement. The state machine should have three states: Red, Green and Yellow,and the transition from one state to another should follow the standard traffic rules."<<endl;
        cout << "press 'r' or 'R' for red" <<endl<<
        "press 'g' or 'G' for green"<<endl <<
        "press 'y' or 'Y' for yellow"<<endl;
        char ch;
        cout << "enter your choice:";
        cin  >> ch;
        // cout << (int) ch;
        switch (ch)
        {
        case ('r'):
            cout << "it's red light, stop your car";
            break;
        case ('R'):
            cout << "it's red light, stop your car";
            break;
        case ('y'):
            cout << "its yellow light";
            break;
        case ('Y'):
            cout << "its yellow light";
            break;
        case ('G'):
            cout << "it's green light";
            break;
        case ('g'):
            cout << "it's green light";
            break;
        default:
            cout << "enter correct value:";
            break;
        }
    }
    else if (number == 5)
    {
        cout << "enter the week number: ";
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "monday";
            break;
        case 2:
            cout << "tuesday";
            break;
        case 3:
            cout << "wednesday";
            break;
        case 4:
            cout << "thrusday";
            break;
        case 5:
            cout << "friday";
            break;
        case 6:
            cout << "saturday";
            break;
        case 7:
            cout << "sunday";
            break;
        default:
            cout << "enter valid choice";
            break;
        }
    }
    else if (number == 6)
    {
        cout << "*****************************************************" << endl
             << "1. additions" << endl
             << "2. subtraction" << endl
             << "3. multiplication" << endl
             << "4. division" << endl
             << "******************************************************************\n";
        int choice;
        cout << "enter your choice: ";
        cin >> choice;
        cout << "enter the 1st number: ";
        cin >> a;
        cout << "enter the 2nd number: ";
        cin >> b;
        switch (choice)
        {
        case 1:
            cout << "additions: " << a + b;
            break;
        case 2:
            cout << "substraction: " << a - b;
            break;
        case 3:
            cout << "multiplication: " << a * b;
            break;
        case 4:
            cout << "division: " << a / b;
            break;
        default:
            cout << "choice correct options";
            break;
        }
    }
    return 0;
}