#include <iostream>
using namespace std;
int main(){
int choice,a,b;
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
    cout << "enter your choice";
    cin >> choice;
return 0;
}