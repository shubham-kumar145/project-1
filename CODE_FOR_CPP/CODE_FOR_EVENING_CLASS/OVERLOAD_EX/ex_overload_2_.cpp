#include <iostream>
using namespace std;
class Test
{
   private:
      int num;
   public:
       Test()
	  {
	     cout<<"Enter one number"<<endl;
	       cin>>num;
	      }
       void operator ++()         {
	  num = num+2;
       }
       void Print() {
	   cout<<num<<endl;
       }
};
int main()
{
    Test raj;
    ++raj;  // calling of a function "void operator ++()"
    raj.Print();
    return 0;
}