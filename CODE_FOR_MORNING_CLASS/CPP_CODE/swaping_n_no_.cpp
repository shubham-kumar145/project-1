// // swaping n number (simple pattern follows)
// #include<iostream>
// using namespace std;
// int main(){
//     int a =1,
//     b=2,
//     c=3,
//     d=4,
//     e=5;
//     a=a+b+c+d+e;
//     b=a-(c+b+d+e);                //  take smaller first then
//     c=a-(c+b+d+e);
//     d=a-(c+b+d+e);
//     e=a-(c+b+d+e);
//     a=a-(c+b+d+e);
//     cout << "value of a "<< a<<endl;
//     cout << "value of b "<< b<<endl;
//     cout << "value of c "<< c<<endl;
//     cout << "value of d "<< d<<endl;
//     cout << "value of e "<< e<<endl;
//     return 0;
// }
#include <stdio.h>
int main()
{
    float a = 7.878;
    int b = (a + .5);
    printf("%d", b);
    return 0;
}