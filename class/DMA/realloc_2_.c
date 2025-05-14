#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=7;
    int* arr;
    arr = (int*)malloc(sizeof(int)*n);
    printf("enter the number : \n");
    for (int i = 0; i < n; i++)
    {
        // scanf("%d",&arr[i]);
        arr[i]=i*i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("   %d  \n",arr[i]);
    }
    // int* ptr;
    arr = (int*)realloc(arr,sizeof(int)*9);
    printf("array increased now inter the new number: \n");
    printf("%d",sizeof(*arr));
    // for (int i = n; i < 10; i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("   %d  \n",arr[i]);
    // }
    free(arr);
    return 0;
}