#include <stdio.h>
int main()
{
    int size, num,count=0;
    printf("enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element of the array: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("enter the number: ");
    scanf("%d",&num);
    for (int i = 0; i < size; i++)
    {
        if(num == array[i]){
            count++;
        }
    }
    if(count>0){
        printf("the given number is present in the array.");
    }
    else{
        printf("the given number is not present in the array.");
    }
    return 0;
}