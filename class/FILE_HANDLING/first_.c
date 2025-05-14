#include <stdio.h>
int main()
{
    FILE *fptr = fopen("seconggvgvd.txt", "a");
    fprintf(fptr, "even number:");
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(fptr, "\n%d", i);
        }
    }
    // while (fptr != NULL)
    // {
    //     char c;
    //     fscanf(fptr, "%c" ,&c);
    //     printf("%c",c);
    // }
    fclose(fptr);
    return 0;
}