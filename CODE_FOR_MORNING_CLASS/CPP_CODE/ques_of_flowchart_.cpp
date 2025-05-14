#include<iostream>
using namespace std;
int main (){
    cout << "************************************************"<<endl<<
    "1.  Draw a Flowchart of sum of two numbers." << endl<<
    "2.  Draw a Flowchart of subtract two number."<< endl<<
    "3.  Draw a Flowchart of multiply of two number."<< endl<<
    "4.  Draw a Flowchart of divide of two number."<< endl<<
    "5.  Draw a flowchart of two no. and check that no. is maximum or minimum."<< endl<<
    "6.  Draw a flowchart of election where you have to check you can vote or not."<< endl<<
    "7.  Draw a Flowchart of modulus of two number."<< endl<<
    "8.  Draw a Flowchart of area of square."<< endl<<
    "9.  Draw a Flowchart of perimeter of square."<< endl<<
    "10. Draw a Flowchart of perimeter of rectangle."<< endl<<
    "11. Draw a Flowchart of area of rectangle."<< endl<<
    "12. Draw a Flowchart of area of circle."<< endl<<
    "13. Draw a Flowchart of circumference of circle."<< endl<<
    "14. Draw a Flowchart of area of triangle."<< endl<<
    "15. Draw a Flowchart of even number."<< endl<<
    "16. Draw a Flowchart of odd number."<< endl<<
    "17. Draw a Flowchart and check that number is divisible by 5 or 11."<< endl<<
    "18. Draw a Flowchart of area and perimeter of square."<< endl<<
    "19. Draw a Flowchart of calculating the average of three number."<< endl<<
    "20. Draw a Flowchart of find the S.I unit."<< endl<<
    "21. Draw a Flowchart take a number from user and print 1 to n."<< endl<<
    "22. Draw a Flowchart take a number from user and print n to 1.(Reverse)"<< endl<<
    "23. Draw a Flowchart take a number from user and print sum of all number."<< endl<<
    "24. Draw a Flowchart take a number from user and find factorial of that number."<< endl<<
    "25. Draw a Flowchart take a number from user and check whether a given number is a prime or not."<< endl<<
    "****************************************************************************"<<endl;
    cout << "enter the number you wnat to perform: ";
    int number,a,b,c,d;
    cin  >> number;
    if (number ==1 ){
        cout << "enter the 1st number: ";  
        cin  >> a;      
        cout << "enter the 2nd number: "; 
        cin  >> b;
        cout << "additions of the 1st and 2nd number: "<<a+b<<endl;
    }
    else if (number == 2){
        cout << "enter the 1st number: ";  
        cin  >> a;      
        cout << "enter the 2nd number: "; 
        cin  >> b;
        cout << "substraction of the 1st and 2nd number: "<<a-b<<endl;
    }
    else if (number == 3){
        cout << "enter the 1st number: ";  
        cin  >> a;      
        cout << "enter the 2nd number: "; 
        cin  >> b;
        cout << "multiple of the 1st and 2nd number: "<<a*b<<endl;
    }
    else if (number == 4){
        cout << "enter the 1st number: ";  
        cin  >> a;      
        cout << "enter the 2nd number: "; 
        cin  >> b;
        cout << "division of the 1st and 2nd number: "<<a/b<<endl;
    }
    else if (number == 5){
        cout << "enter the 1st number: ";  
        cin  >> a;      
        cout << "enter the 2nd number: "; 
        cin  >> b;
        if (a>b){
            cout << "1st number is greater than 2nd number";
        }
        else {
            cout << "1st number is smaller than 2nd number";
        }
    }
    else if (number == 6){
        cout << "enter your age : ";
        cin  >> a;
        if (a >= 18){
            cout << "you can vote";
        }
        else {
            cout << "you can't vote ";
        }
    }
    else if (number == 7){
        cout << "enter the 1st number: ";  
        cin  >> a;      
        cout << "enter the 2nd number: "; 
        cin  >> b;
        cout << "remender of the 1st and 2nd number: "<<a%b<<endl;
    }
    else if (number == 8){
        cout << "enter the side of the square :";  
        cin  >> a;
        cout << "area of the square: "<< a*a ;
    }
    else if (number ==9){
        cout << "enter the side of the square: ";
        cin  >> a;
        cout << " perimeter of the square: "<< 4*a;
    }
    else if (number == 10){
        cout << "enter the length :";  
        cin  >> a;      
        cout << "enter the breath :"; 
        cin  >> b;
        cout << "perimeter of the rectangle : "<< 2*(a+b);
    }
    else if (number == 11){
        cout << "enter the length number:  ";  
        cin  >> a;      
        cout << "enter the breath number:  "; 
        cin  >> b;
        cout << "area of the rectangle : "<< a*b;
    }
    else if (number == 12){
        cout << "radius of the circle: ";
        cin  >>a ;
        cout << "area of the circle: "<< 3.14*a*a;
    }
    else if (number == 13){
        cout << "radius of the circle: ";
        cin  >>a ;
        cout << "circumference of the circle: "<< 2*3.14*a;

    }
    else if (number == 14){
        cout << "enter the base of the triangle: ";
        cin  >> a;
        cout << "enter the heigth of the triangle: ";
        cin  >> b;
        cout << "area of the triangle: "<< 0.5*a*b;
    }
    else if (number == 15){
        cout << "enter the number: ";
        cin  >> a;
        if (a%2==0){
            cout << "it is the even number";
        }
    }
    else if (number == 16){
        cout << "enter the number: ";
        cin  >> a;
        if (a%2!=0){
            cout << "it is the odd number";
        }
    }
    else if (number == 17){
        cout <<"enter the number: ";
        cin  >> a;
        if (a%5==0){
            cout<< "number is divisible by 5";
        }
        else if(a%11==0){
            cout << "number is divisible by 11";
        }
        else {
            cout << " number is not divisible by 5 and 11";
        }
    }
    else if (number == 18){
        cout << "enter the side of the square: ";
        cin  >> a;
        cout << "area of the square: "<< a*a<< " and perimeter: "<<4*a;
    }
    else if (number == 19){
        float a,b,c;
        cout <<"enter the 1st number: ";
        cin  >> a;
        cout <<"enter the 2nd number: ";
        cin  >> b;
        cout <<"enter the 3rd number: ";
        cin  >> c;
        cout << "average of the three number: "<<(a+b+c)/3;
    }
    else if (number == 20){
        cout << "enter the principle amount: ";
        cin  >> a;
        cout << "enter the time: ";
        cin  >> b;
        cout << "enter the rate of intrest: ";
        cin  >> c;
        d = a * b * c;
        cout << "simple intrest: "<<d;

    }
    else if (number == 21){
        cout << "enter the number: ";
        cin  >> a;
        for (int i=1;i<=a;i++){
            cout << i<<endl;
        }
    }
    else if (number == 22){
        cout << " enter the number: ";
        cin  >> a ;
        for (int i=a;i>0;i--){
            cout << i<<endl;
        }
    }
    else if (number == 23){
        cout << " enter the 1st number: ";
        cin  >> a;
        cout << " enter the 2nd number: ";
        cin  >> b;
        cout << " enter the 3rd number: ";
        cin  >> c;
        cout << "sum of the 1st , 2nd and 3rd number: "<<a+b+c;
    }
    else if (number == 24){
        b=0;
        cout << "enter the number: ";
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            b=b+i;
        }
        cout << " factorial of the number "<< a<< " is: "<<b;
    }
    else if (number == 25){
        b=0;
        cout << "enter the number: ";
        cin >> a;
        c=a/2;
        for (int i=2;i<c;i++){
            if (a%i==0){
                b++;
            }
        }
        if (b<1){
            cout << "it is a prime number";
        }
        else{
            cout << "it is a composite number";
        }
    }
    else{
        cout << "enter the correct number: ";
    }
    cout << "\n********************************************";
    return 0;
}