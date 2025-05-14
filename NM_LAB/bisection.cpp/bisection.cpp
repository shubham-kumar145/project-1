#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
    return cos(x) - x * exp(x);
}
void bisection(double a, double b, int intmax, double tolerance)
{
    double c;
    for (int i = 0; i < intmax; i++)
    {
        c = (a + b) / 2.0;
        if (f(c) == 0 || (b-a) / 2 < tolerance)
        {
            cout << "root found " << c << endl;
            return;
        }
        else if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    cout << "root after the " << intmax << " iterations " << c << endl;
}
int main()
{
    double a = 0.0, b = 1.0;
    int maxIterations = 20;
    double tolerance = 1e-6;

    bisection(a, b, maxIterations, tolerance);
    return 0;
}