#include <stdio.h>
int main()
{
    int size,temp;
    printf("enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element of the array: ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < size/2; i++)
    {
        temp = array[i];
        array[i]=array[size-i-1];
        array[size-1-i]=temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}