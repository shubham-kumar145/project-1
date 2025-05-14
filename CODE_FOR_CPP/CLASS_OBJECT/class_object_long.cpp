#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class empl{
    private:
        int salary,bonous;
        string role;
    public:
        string name;
        int emp_id;
        void input(int x,int y,string r){
            salary=x;
            bonous=y;
            role=r;
        }
        int delaits(string n,int i){
            name=n;
            emp_id=i;
            return 0;
        }
};
int main(){
    int x,y,i,j,emp_id1;
    string name1,r;
    cout << "number of the employee"<<endl;
    cin >> i;
    for (j=1;j<i;j++){
        cout << "enter the employee name"<< endl;
        cin >> name1;
        empl name1;
        cout << "enter the employee id_number"<< endl;
        cin>>emp_id1;
        name1.name=name1;
        name1.emp_id=emp_id1;
        cout << n.name<<n.emp_id;
    }
    while(true){
        cout << "enter the name of the employee"<<endl;
        // cin >> 
        break;
    }
    return 0;
}