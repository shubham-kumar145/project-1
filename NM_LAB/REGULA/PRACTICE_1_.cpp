#include <bits/stdc++.h>
using namespace std;

double func(double x)
{
    return cos(x) - x * exp(x);
}

void regula(double a, double b, int maxiteration, double tolrence)
{
    double c;
    for (int i = 0; i < maxiteration; i++)
    {
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));
        if (func(c) == 0 || fabs(func(c)) < tolrence)
        {
            cout << "root of the function; " << c << endl;
            return;
        }
        else if (func(a) * func(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    cout << "root after iteration " << maxiteration << " iterations " << c << endl;
}
int main()
{
    double a = 0.0, b = 1.0;
    int maxIterations = 20;
    double tolerance = 1e-6;

    regula(a, b, maxIterations, tolerance);

    return 0;
}