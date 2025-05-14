#include<iostream>
// #include<conio.h>
using namespace std;
class C1
{
 int a,b;
 public:
  void getValue();
  void show()
  {
   cout<< a<< "\t\t"<< b<<endl;
  }
 C1 operator -(C1);   //overloading '-' operator
};
C1 C1::operator-(C1 x)	//operator function
{
 C1 t;
 t.a=a-x.a;
 t.b=b-x.b;
 return t;
}
void C1::getValue()
{
  cout<<"\n Enter the one number ";
  cin>>a;
  cout<<"\n Enter the second number ";
  cin>>b;
}

int main()
{
//  clrscr();                     
 C1 t1,t2,t3;
 cout<<"Taking input in 1st Object"<<endl;
 t1.getValue();
 cout<<"Taking input in 2nd Object"<<endl;
 t2.getValue();
 t3=t1-t2;	//adding of two time object using '+' operator
 cout<<"First Object value"<<endl;
 t1.show();
 cout<<"Second Object value"<<endl;
 t2.show();
 cout<<"Object value after adding Object1 + Object2"<<endl;
 t3.show();
 return 0;
//  getch();
}