#include <stdio.h>
int main()
{
    int m,n;
    printf("enter the row ");
    scanf("%d",&n);
    printf("enter the column ");
    scanf("%d",&m);
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter the element of %d row and %d column ",n,m);
            scanf("%d",&array[i][j]);
        }
    }
    for (int  i = 0; i < m*n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m-1; k++)
            {
                if (array[j][k]>array[j][k+1])
                {
                    int temp = array[j][k];
                    array[j][k]=array[j][k+1];
                    array[j][k+1] = temp;
                }
                if (array[j][k]>array[j+1][k] && j+1 < n)
                {
                    int temp = array[j][k];
                    array[j][k]=array[j+1][k];
                    array[j+1][k] = temp;
                }
                
            }
        }        
    }    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}