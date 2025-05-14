#include <stdio.h>
int main()
{
    int size, odd = 0, even = 0;
    printf("enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element: ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d element is odd & %d element is even",odd,even);
    return 0;
}