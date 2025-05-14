#include <iostream>
#include<string.h>
using namespace std;
class details{
    int salary;
    public:
    int roll_no;
    string name1;
    void getsname();
    void putsname();
};
int i=0,j=0;
char ch=true;
int statment(){
    cin >> ch;
    if ((ch == 'y')||(ch == 'Y')){
        return true;
    }
    else return false;
}
void details :: getsname(){
    cout << "enter name of the employee :-"<<endl;
    cin >> name1;
    cout <<"roll of that employee:- "<<endl;
    cin >> roll_no;
    cout <<"salary of that employee:- "<<endl;
    cin >> salary;
}
void details :: putsname(){
    cout <<"name the employee :-  " <<name1<<endl
    << "roll no of the employee :-  "<<roll_no<<endl
    << "salary of the employee :-  "<<salary<<endl;
}
int main (){
    details st[30];
    while (ch == true){
        cout << "enter the details of the "<< i+1 << " employee:-"<<endl;
        st[i].getsname();
        i++;
        cout << "want to enter more data \npress the 'y' to continue :- ";
        ch = statment();
    }
    cout << "what to see the details \n(press 'y' to continue)"<<endl;
    ch = statment();
    while (ch == true){
        cout << "details of the "<< j+1 << " employee:-"<<endl;
        st[j].putsname();
        j++;
        cout << "want to display more data \npress the 'y' to continue :- ";
        ch = statment();
    }
    cout << "******************************************";
    return 0;
}