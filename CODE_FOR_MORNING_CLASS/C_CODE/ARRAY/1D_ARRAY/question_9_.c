#include<stdio.h>
int main(){
    int size,even=0,odd=0;
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
        if(array[i]%2==0){
            even=even+array[i];
        }
        else{
            odd=odd+array[i];
        }
    }
    printf("sum of even element = %d\nsum of odd element = %d",even,odd);
    return 0;
}