/* W.A.P to make a class with name line having one function
getlength which is return type and one parameterised constructor
and one copy constructor whose value is with exiting object value
and also display */
#include <iostream>
using namespace std;
class Line {
    int length, breath;
public:
    int area, perimeter;
    Line(int length, int breath) {
        this-> length = length;
        this-> breath = breath;
        area=length*breath;
        cout << "two parameterized constructor worked"<<endl;
    }

    Line(const Line &sec) {
        this-> length =sec.length;
        this-> breath = sec.breath;
        this-> area = sec.area;
        perimeter = 2 * (length + breath);
        cout << "copy constructor worked"<<endl;
    }
    void display();
    ~Line(){
        cout << "bye bye\n";
    }
};
void Line ::  display() {
    cout << "Area is " << area << " and Perimeter is " << perimeter << endl;
}
int l,b;
int getlength() {
    cout << "Enter the length: ";
    cin >> l;
    return l;
}
int getbreath(){
    cout << "Enter the breath: ";
    cin >> b;
    return b;
}
int main() {
    Line first(getbreath(),getlength());
    Line second(first);
    second.display();
    cout << "**********************************************";
    return 0;
}
