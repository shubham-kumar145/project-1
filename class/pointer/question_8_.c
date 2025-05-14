#include <stdio.h>
void toput(int *p2, int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("enter the %d row and %d coloum of the element: ", i + 1, j + 1);
            scanf("%d", &*(p2 + i * n1 + j));
        }
    }
}
void toget(int arr[],int *p2, int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", *(p2 + i * n1 + j));
            // printf("%d ", arr[i*n1+j]);
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
    int arr[n1*n2];
    int *p2 = arr;
    toput(p2, n1, n2);
    toget(arr,p2, n1, n2);
    return 0;
}


// #include <stdio.h>
// void toput(int **p2, int n1, int n2)
// {
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             printf("enter the %d row and %d coloum of the element: ", i + 1, j + 1);
//             scanf("%d",&(p2[i][j]));
//         }
//     }
// }
// void toget(int **p2, int n1, int n2)
// {
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             printf("%d ", (p2[i][j]));
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int n1, n2;
//     printf("enter the row of the array: ");
//     scanf("%d", &n1);
//     printf("enter the coloum of the array: ");
//     scanf("%d", &n2);
//     int arr[n1][n2];
//     int *p1 = (int *)arr;  //why
//     int **p2 = &p1;
//     toput(p2, n1, n2);
//     toget(p2, n1, n2);
//     return 0;
// }