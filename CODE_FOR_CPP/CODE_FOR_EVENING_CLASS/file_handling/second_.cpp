#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct data
{
    int roll_no;
    char name[50];
};
char ch = 'y';
int statment()
{
    cout << "\nwant to continue: ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        return 'y';
    }
    else
        return false;
}
int main()
{
    struct data first[50];
    int i = 0, j = 0;
    ofstream student;
    student.open("student_data.dat");
    while (ch == 'y')
    {
        cout << "\nenter the name of the student: ";
        // cin.getline(first.name,50);
        cin >> first[i].name;
        student << first[i].name;
        cout << "\nenter your roll no: ";
        cin >> first[i].roll_no;
        student << first[i].roll_no;
        i++;
        ch = statment();
    }
    student.close();
    cout << "\nwant to see the details:\n(press 'y')";
    ch = statment();
    ifstream data; // open in read mode
    data.open("student_data.dat");
    while (ch == 'y')
    {
        cout << "\ndetails of the " << j + 1 << " student; \n";
        data >> first[j].name;
        cout << "\nname of the " << j + 1 << " student : " << first[i].name;
        data >> first[j].roll_no;
        cout << "\nroll no of the " << j + 1 << " student: " << first[i].roll_no;
        j++;
        ch = statment();
    }
    data.close();
    return 0;
}