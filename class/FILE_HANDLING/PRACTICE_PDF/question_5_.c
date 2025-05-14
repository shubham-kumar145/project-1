#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("example.txt", "r");
    if (ptr == NULL)
    {
        printf("file not exits");
    }
    else
    {
        char str[50];
        FILE *ptr1;
        ptr1 = fopen("second_example.txt", "w");
        while (fgets(str, 50, ptr))
        {
            fputs(str, ptr1);
        }
        fclose(ptr1);
    }
    fclose(ptr);
    return 0;
}