#include <stdio.h>
int main()
{
    int size,num, i = 0;
    printf("enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    while (i < size)
    {
        printf("enter the %d element of the array: ",i+1);
        scanf("%d",&num);
        if (num == 1 || num == 0)
        {
            array[i] = num;
            i++;
        }
        else
        {
            printf("%d invalid \n",num);
        }
    }
    printf("array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}