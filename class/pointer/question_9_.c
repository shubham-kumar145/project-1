#include <stdio.h>
void toput(int **p2, int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("enter the %d row and %d coloum of the element: ", i + 1, j + 1);
            scanf("%d", &(p2[i][j]));
        }
    }
}
void add(int **p2, int **p4, int **p6, int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            p6[i][j]=p2[i][j]+p4[i][j];
        }
    }
}
void toget(int **p2, int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", (p2[i][j]));
        }
        printf("\n");
    }
}

int main()
{
    int n1, n2;
    printf("enter the row of the array: ");
    scanf("%d", &n1);
    printf("enter the coloum of the array: ");
    scanf("%d", &n2);
    int arr1[n1][n2];
    int arr2[n1][n2];
    int arr3[n1][n2];
    int *p1 = (int *)arr1; // why
    int *p3 = (int *)arr2; // why
    int *p5 = (int *)arr3; // why
    int **p2 = &p1;
    int **p4 = &p3;
    int **p6 = &p5;
    toput(p2, n1, n2);
    toput(p4, n1, n2);
    add(p2, p4, p6, n1, n2);
    toget(p6, n1, n2);
    return 0;
}