#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    ofstream file;
    int id;
    string name;
    file.open("first.txt");
    cout << "enter your id: ";
    cin  >> id;
    file << id<<"\t";
    cout << "enter your name: ";
    cin >> name;
    // getline(cin,name);
    file << name<<"\t";
    file.close();
    return 0;
}
