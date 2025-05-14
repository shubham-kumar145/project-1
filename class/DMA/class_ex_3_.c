#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=3;
    int* arr;
    arr = (int*)calloc(sizeof(int),5);
    printf("enter the number : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("   %d  \n",arr[i]);
    }
    printf("%lld",sizeof(arr));
    return 0;
}