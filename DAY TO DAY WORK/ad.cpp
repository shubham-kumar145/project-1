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
int statment(){
    char cont;
    cin >> cont;
    if ((cont == 'y')||(cont == 'Y')){
        return true;
    }
    else return false;
}
void details :: getsname(){
    cout << "enter the name of the student :-"<<endl;
    cin >> name1;
    cout <<"roll of that student:- "<<endl;
    cin >> roll_no;
    cout <<"salary of that student:- "<<endl;
    cin >> salary;
}
void details :: putsname(){
    cout <<"name the student :-  " <<name1<<endl;
    cout << "roll no of the student :-  "<<roll_no<<endl;
    cout << "salary of the student :-  "<<salary<<endl;
}
int main (){
    details st[30];
    int i=0,j=0;
    int ch=true;
    details name;
    while (ch == true){
        cout << "enter the details of the "<< i+1 << " student:-"<<endl;
        st[i].getsname();
        i++;
        cout << "want to enter more data"<< endl << "press the y to continue :- ";
        ch = statment();
    }
    cout << "what to see the details"<<endl<<i<<endl;
    ch = statment();
    while (ch == true){
        cout << "details of the "<< j+1 << " student:-"<<endl;
        st[j].putsname();
        j++;
        cout << "want to display more data"<< endl << "press the y to continue :- ";
        ch = statment();
    }
    cout << "******************************************";
    return 0;
}
