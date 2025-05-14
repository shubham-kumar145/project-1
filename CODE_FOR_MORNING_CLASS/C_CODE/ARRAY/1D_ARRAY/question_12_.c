#include<stdio.h>
int main(){
    int size,max=0,min=999999;
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
        if(max<=array[i]){
            max=array[i];
        }
        if(min>=array[i]){
            min=array[i];
        }
    }
    printf("largest element = %d \nsmallest element = %d",max,min);
    return 0;
}