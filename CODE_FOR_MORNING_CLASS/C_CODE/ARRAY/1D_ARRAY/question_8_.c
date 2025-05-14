#include<stdio.h>
int main(){
    int size1,size2;
    printf("enter the size of first array: ");
    scanf("%d",&size1);
    printf("enter the size of second array: ");
    scanf("%d",&size2);
    int array1[size1],array2[size2],array3[size1+size2];
    for (int i = 0; i < size1; i++)
    {
        printf("enter the %d element of the first array: ",i+1);
        scanf("%d",&array1[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        printf("enter the %d element of the second array: ",i+1);
        scanf("%d",&array2[i]);
    }
    for (int i = 0; i < size1; i++)
    {
        array3[i]=array1[i];
    }
    for (int i = size1,j=0; i < size1+size2;j++,i++)
    {
        array3[i]=array2[j];
    }
    for (int i = 0; i < size1+size2;i++)
    {
        printf("%d ",array3[i]);
    }
}