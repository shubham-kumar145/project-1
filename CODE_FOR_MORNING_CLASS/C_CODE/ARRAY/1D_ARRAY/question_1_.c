#include<stdio.h>
int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the %d element:  ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d \n",arr[j]);
    }
    return 0;
}