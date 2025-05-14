#include <iostream>
using namespace std;
class time1
{
  int hr, min, sec;

public:
  time1()
  {
    hr = 0, min = 0;
    sec = 0;
  }

  time1(int h, int m, int s)
  {
    hr = h, min = m, sec = s;
  }
  friend int operator==(time1 &t1, time1 &t2);
};
int operator==(time1 &t1, time1 &t2) // operator function
{
  if (t1.hr == t2.hr && t1.min == t2.min && t1.sec == t2.sec)
    return 1;
  else
    return 0;
}

int main()
{
  time1 t1(2, 3, 4), t2(2, 3, 4);
  int b = t1 == t2;
  cout << b;

  return 0;
}