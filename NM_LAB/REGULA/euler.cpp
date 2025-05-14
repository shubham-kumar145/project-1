#include <stdio.h>

#define N 4

void gaussianElimination(double A[N][N], double B[N])
{
    int i, j, k;
    double factor;
    double X[N];

    // Forward Elimination
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            factor = A[j][i] / A[i][i];
            for (k = i; k < N; k++)
            {
                A[j][k] -= factor * A[i][k];
            }
            B[j] -= factor * B[i];
        }
    }

    // Back Substitution
    for (i = N - 1; i >= 0; i--)
    {
        X[i] = B[i];
        for (j = i + 1; j < N; j++)
        {
            X[i] -= A[i][j] * X[j];
        }
        X[i] /= A[i][i];
    }

    // Print result
    printf("Solution using Gaussian Elimination: ");
    for (i = 0; i < N; i++)
    {
        printf("x%d = %.4lf ", i + 1, X[i]);
    }
    printf("\n");
}

int main()
{
    double A[N][N] = {
        {1.19, 2.11, -100.0, 1.0},
        {14.2, -0.122, 12.2, -1.0},
        {0.0, 100.0, -99.9, 1.0},
        {15.3, 0.11, -13.1, 0.0}};

    double B[N] = {1.12, 3.44, 2.15, 4.16};

    gaussianElimination(A, B);

    return 0;
}