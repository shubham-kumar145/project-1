#include<stdio.h>
int main(){
    int size,index;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element of the array: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("enter the index number: ");
    scanf("%d",&index);
    printf("index value = %d",array[index]);
    return 0;
}