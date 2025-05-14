#include<stdio.h>
int main(){
    int size;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element of the array: ",i+1);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}