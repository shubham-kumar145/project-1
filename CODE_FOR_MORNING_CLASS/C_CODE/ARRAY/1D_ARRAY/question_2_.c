#include<stdio.h>
void input(int array[],int size);
void output(int array[],int size);
int main(){
    int size;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    int array1[size];
    input(array1,size);
    output(array1,size);
    return 0;
}
void input(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element: ",i+1);
        scanf("%d",&array[i]);
    }
}
void output(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }   
}
