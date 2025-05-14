#include<stdio.h>
int main(){
    int arr[2][3];
    int *ptr=arr[0];
    int **ptr1=&ptr;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            // printf("%d ",*(ptr+i*3)+j);
            scanf("%d",(*ptr1+i*3)+j);
        }
    }
      for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
            
        }
    }
    return 0;
}