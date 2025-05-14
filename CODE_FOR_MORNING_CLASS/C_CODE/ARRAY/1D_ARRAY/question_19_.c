#include <stdio.h>
int main()
{
    int size, temp;
    printf("enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element of the array: ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size-1-j; i++)
        {
            if (array[i] < array[i+1])
            {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}