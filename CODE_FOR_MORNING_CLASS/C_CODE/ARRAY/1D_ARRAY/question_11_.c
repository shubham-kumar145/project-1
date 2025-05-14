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
        if(array[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    int array1[even],array2[odd];
    for (int i = 0,e=0,o=0; i < size; i++)
    {
        if(array[i]%2==0){
            array1[e]=array[i];
            e++;
        }
        else{
            array2[o]=array[i];
            o++;
        }
    }
    printf("even = ");
    for (int i = 0; i < even; i++)
    {
        printf("%d ",array1[i]);
    }
    printf("\nodd = ");
    for (int i = 0; i < odd; i++)
    {
        printf("%d ",array2[i]);
    }
    
    return 0;
}