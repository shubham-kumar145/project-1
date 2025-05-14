#include <bits/stdc++.h>
using namespace std;

void gauss(vector<vector<double>> &A, vector<double> &B)
{
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        double diag = A[i][i];
        for (int j = 0; j < n; j++)
        {
            A[i][j] /= diag;
        }
        B[i] /= diag;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                double factor = A[j][i];
                for (int k = 0; k < n; k++)
                {
                    A[j][k] -= factor * A[i][k];
                }
                B[j]-=factor * B[i];
            }
        }
    }
    cout << "soultion of the gauss jordon:" ;
    for (int i = 0; i < n; i++)
    {
            cout << B[i]<<endl;
    }
}
int main() {
    vector<vector<double>> A = {
        {1.19, 2.11, -100.0, 1.0},
        {14.2, -0.122, 12.2, -1.0},
        {0.0, 100.0, -99.9, 1.0},
        {15.3, 0.11, -13.1, 0.0}
    };

    vector<double> B = {1.12, 3.44, 2.15, 4.16};

    gauss(A, B);

    return 0;
}