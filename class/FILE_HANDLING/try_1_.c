#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("try_1.txt", "a");
    if (ptr == NULL)
    {
        printf("NULL");
    }
    else
    {
        printf("else");
    }
    return 0;
}