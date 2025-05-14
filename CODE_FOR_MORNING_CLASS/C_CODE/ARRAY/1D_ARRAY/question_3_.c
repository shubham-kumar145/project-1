#include<stdio.h>
int main(){
    int size,sum=0;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element of ythe array: ",i+1);
        scanf("%d",&array[i]);
    }    
    for (int i = 0; i < size; i++)
    {
        sum=sum+array[i];
    }
    printf("sum = %d",sum);
    return 0;
}