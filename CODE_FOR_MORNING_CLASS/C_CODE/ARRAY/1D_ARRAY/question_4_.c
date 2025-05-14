/*
4. Write a program to create an Array an take input from user and print
the product of the elements 
*/
#include<stdio.h>
int main(){
    int size,product=1;
    printf("enter the size of the element: ");
    scanf("%d",&size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element: ",i+1);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        product = product * array[i];
    }
    printf("product = %d ",product);
    return 0;
}