#include<iostream>
using namespace std;
int main (){
    cout << 
    "****************************************************************************************"<<endl<<
    "1. Write a C program to find the largest of three numbers using nested if-else statements."<<endl<<
    "2. Write a C program to find the maximum of four integers using nested if-else statements."<<endl<<
    "3.Write a C program to take input from three users who gives the first letter of his name and the total marks. Find who is First ,second and third?"<<endl<<
    "4.Write a C program to check positive, negative or zero"<<endl<<
    "5. Write a C program to enter month number between(1-12) and print number of days in month"<<endl<<
    "****************************************************************************************"<<endl;
    int number,a,b,c,d;
    cout << "enter the number: ";
    cin  >> number;
    if (number == 1){
        cout << "enter the 1st number: ";
        cin  >> a;
        cout << "enter the 2nd number: ";
        cin  >> b;
        cout << "enter the 3rd number: ";
        cin  >> c;
        if (a>=b){
            if (a>=c){
                cout << "1st number is the maximum: ";
            }
            else {
                cout << "3rd number is the maximum: ";
            }
        }
        else{
            if (b>=c)
            {
                cout<<"2nd is the largest";
            }
            else{
                cout << "3rd number is the maximum: ";
            }
            
        }
    }
    else if (number == 2){
        cout << "enter the 1st number: ";
        cin  >> a;
        cout << "enter the 2nd number: ";
        cin  >> b;
        cout << "enter the 3rd number: ";
        cin  >> c;
        cout << "enter the 4th number: ";
        cin  >> d;
        if (a>=b)
        {
            if (a>=c)
            {
                if (a>=d)
                {
                    cout << "1st number is greatest";
                }
                else
                {
                    cout <<"4th number is greatest";
                }
                
            }
            else{
                if (c>=d)
                {
                    cout << "3rd number is greatest";
                }
                else
                {
                    cout << "4th number is greatest";
                }
            }
        }
        else
        {
            if (b>=c)
            {
                if (b>=d)
                {
                    cout <<"2nd number is greatest";
                }
                else
                {
                    cout << "4th number is greatest";
                }
            }
            else
            {
                if (c>=d)
                {
                    cout << "3rd number is greatest";
                }
                else
                {
                    cout << "4th number is greatest";
                }
            }
        }
    }
    else if (number == 3){
        char n1,n2,n3;
        cout << "enter your first letter of your name: ";
        cin  >> n1;
        cout << "enter your marks: ";
        cin  >> a;
        cout << "enter your first letter of your name: ";
        cin  >> n2;
        cout << "enter your marks: ";
        cin  >> b;
        cout << "enter your first letter of your name: ";
        cin  >> n3;
        cout << "enter your marks: ";
        cin  >> c;
        if (a>=b)
        {
            if (a>=c)
            {
                cout << n1 <<" got the first place and got "<<a<<" marks";
                cout << n3 <<" got the second place and got "<<c<<" marks";
                cout << n2 <<" got the third place and got "<<b<<" marks";
            }
            else
            {
                cout << n3 << " got the first place and got "<<c<<" marks";
                cout << n1 <<" got the second place and got "<<a<<" marks";
                cout << n2 <<" got the third place and got "<<b<<" marks";
            }            
        }
        else
        {
            if (b>=c)
            {
                cout << n2 << " gots the first place and got "<<b<<" marks";
                cout << n3 << " gots the second place and got "<<c<<" marks";
                cout << n1 << " gots the third place and got "<<a<<" marks";
            }
            else
            {
                cout << n3 << " gots the first place and got "<<c<<" marks";
                cout << n2 << " gots the second place and got "<<b<< "marks";
                cout << n1 << " gots the third place and got "<<a<<" marks";
            }            
        }
    }
    else if (number == 4){
        cout << "enter the number: ";
        cin  >> a;
        if (a == 0)
        {
            cout << "given number is equal to zero:";
        }
        else
        {
            if (a > 0)
            {
                cout << "given number is positive";
            }
            else
            {
                cout << "given number is negative";
            }
        }
    }
    else if (number == 5){
        cout << "enter the month number:  ";
        cin  >> a;
        if (a<=6)
        {
            if (a<=3)
            {
                if (a == 2)
                {
                    cout << "febuary has 28 days";
                }
                else
                {
                    if (a<2)
                    {
                        cout << "january has 31 days";
                    }
                    else
                    {
                        cout << "march has 31 days";
                    }
                }                
            }
            else
            {
                if (a == 5){
                    cout << "may has 31 days";
                }
                else
                {
                    if (a < 5)
                    {
                        cout << "april has 30 days";
                    }
                    else
                    {
                        cout << "june has 30 days";
                    }
                }
            }
        }
        else
        {
            if (a <=9)
            {
                if (a == 8)
                {
                    cout << "august has 31 days";
                }
                else
                {
                    if (a<8)
                    {
                        cout << "july has 31 days";
                    }
                    else 
                    {
                        cout << "september has 30 days";
                    }
                    
                }
            }
            else
            {
                if (a == 11)
                {
                    cout << "november has 30 days";
                }
                else
                {
                    if (a < 11)
                    {
                        cout << "october has 31 days";
                    }
                    else
                    {
                        cout << "december has 31 days";
                    }   
                }   
            }   
        }        
    }
    else if(number == 6){
        cout << "enter the month:  ";
        cin >>a;
        if ((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a==12)){
            cout << "number of day in month is: 31";
        }
        else
        {
            if (a==2)
            {
                cout <<"number if day is: 28";
            }
            else
            {
                cout <<"number of day is: 30";
            }
        }
    }
    else
    {
        cout << "enter correct number";
    }
    cout<<"\n************************************************************";
    return 0;
}