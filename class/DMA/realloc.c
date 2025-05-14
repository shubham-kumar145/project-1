#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=5;
    int* arr;
    arr = (int*)malloc(sizeof(int)*n);
    printf("enter the number : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("   %d  \n",arr[i]);
    }
    int* ptr;
    ptr = (int*)realloc(arr,sizeof(int)*10);
    printf("array increased now inter the new number: ");
    for (int i = n; i < 10; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("   %d  \n",ptr[i]);
    }
    return 0;
}