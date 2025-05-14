#include<stdio.h>
void input(int array[],int n){
    for (int  i = 0; i < n; i++)
    {
    printf("enter the %d element: ",i+1);
    scanf("%d",&array[i]);        
    }    
}
void output(int array[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }    
}
int main(){
    int size;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    input(array,size);
    output(array,size);
    return 0;
}