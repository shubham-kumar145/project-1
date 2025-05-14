#include<iostream>
#include<conio.h>
using namespace std;
class first{
    private:
        int amount= 234234234,emp_password= 57345734;
    public:
        int emp_id;
        void empl(){
            cout << " emp_id "<< emp_id<<endl;
            cout << "password  "  << emp_password<<endl;
            cout<< "amount  "<< amount<<endl;
            
        }

};
int main(){
    first shubham,shivam;
    shubham.emp_id = 324;
    shivam.emp_id = 592463463;
    shubham.empl();
    shivam.empl();
    cout<<shubham.emp_id;
    return 0;
}