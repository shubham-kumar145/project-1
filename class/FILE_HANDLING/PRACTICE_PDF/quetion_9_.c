#include <stdio.h>
int main()
{
    FILE *ptr1 = fopen("example.txt", "r");
    FILE *ptr2 = fopen("example1.txt", "r");
    FILE *ptr3 = fopen("example2.txt", "w");
    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("file not exist");
    }
    char str[50];
    while (fgets(str, 50, ptr1))
    {
        fputs(str,ptr3);
    }
    fputc('\n',ptr3);
    while (fgets(str, 50, ptr2))
    {
        fputs(str,ptr3);
    }
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
    return 0;
}