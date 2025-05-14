#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int count = 0;
    char str[50];
    FILE *ptr;
    ptr = fopen("example.txt", "r");
    FILE *ptr1 = fopen("new_file.txt", "w");
    char **ptr2;
    ptr2 = (char **)malloc(sizeof(char) * (count));
    while (fgets(str, 50, ptr))
    {
        printf("%d ----count  \n", count);
        ptr2 = (char **)realloc(ptr2, sizeof(char) * (count + 1));
        ptr2[count] = (char *)malloc(sizeof(char) * 50);
        ptr2[count] = str;
        printf("%s   ----- string \n",ptr2[count]);
        printf("%ld ---- size \n", strlen(ptr2[count]));

        count++;
    }
    printf("%d count =  \n", count);

    while (count > 0)
    {
        printf("H");
        long j = strlen(ptr2[count]);
        printf("%ld ---- size \n", j);
        // printf("%d ptr2 length  \n", j);
        for (int i = j; i >= 0; i--)
        {
            putc(ptr2[count][i], ptr1);
        }
        count--;
    }
    fclose(ptr);
    fclose(ptr1);
    return 0;
}