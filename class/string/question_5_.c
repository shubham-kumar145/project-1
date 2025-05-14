#include <stdio.h>
int main()
{
    char name1[20];
    int count = 0;
    fgets(name1, 20, stdin);
    while (name1[count])
    {
        count++;
    }
    for (int i = count; i >= 0; i--)
    {
        printf("%c ",name1[i]);
    }
    return 0;
}