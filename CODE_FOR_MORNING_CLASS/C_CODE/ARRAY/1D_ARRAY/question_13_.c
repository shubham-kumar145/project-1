#include <stdio.h>
int main()
{
    int size, count = 0;
    printf("enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element of the array: ",i+1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            printf("%d is repeated \ncount = %d", array[i], count);
            break;
        }
    }
    return 0;
}