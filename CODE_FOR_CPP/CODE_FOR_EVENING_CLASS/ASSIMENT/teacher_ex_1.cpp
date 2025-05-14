#include <iostream>
using namespace std;
class student {
    char name[50];
    int marks;
    public:
        void getname(){
            cin.ignore();
            cin.getline(name,50);
        }
        void getmarks(){
            // cin.ignore();
            cin >> marks;
        }
        void displayinfo(){
            cout << "name:  "<<name << endl;
            cout << "marks:  "<<marks << endl;
        }
};
int main(){
    student st[30];
    int i,n;
    cout << endl << "enter the range"<<endl;
    cin >> n;
    for (i =0;i<n;i++){
        cout << "student"<<i+1<<endl;
        cout << "enter student name"<<endl;
        st[i].getname();
        cout<< "enter marks"<<endl;
        st[i].getmarks();
    }
    cout << endl<<"your data as follows:-"<<endl;
    for (i=0;i<n;i++){
        cout << "student"<< i+1 <<endl;
        st[i].displayinfo();
    }
    return 0;
}