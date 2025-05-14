#include<bits/stdc++.h>
using namespace std;

double f(double x){
    return x * exp(x) - 1;
}

double fd(double x){
    return exp(x) + x*exp(x);
}

void rapson(double x0,int intmax,double tolerance){
    double x1;
    for (int i = 0; i < intmax; i++)
    {
        x1=x0 - f(x0)/fd(x0);
        if(fabs(f(x1))<tolerance){
            cout << "root found "<< x1 << endl;
            return;
        }
        x0=x1;
    }
    cout << "root after "<< intmax << " iteration "<< x1 << endl;
}

int main(){
    double x0= 0.5;
    int intmax = 10;
    double tolerance = 1e-6;
    rapson(x0,intmax,tolerance);
    return 0;
}