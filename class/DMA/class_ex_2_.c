#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=5;
    int* arr;
    arr = (int*)malloc(sizeof(int));
    printf("enter the number : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    
    return 0;
}
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n=5;
//     int* arr;
//     arr = (int*)malloc(sizeof(int)*n);
//     printf("enter the number : \n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d  ",arr[i]);
//     }
    
//     return 0;
// }