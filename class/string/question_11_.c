#include <stdio.h>
#include <string.h>
int main()
{
    char name1[40], name2[20];
    int count = 0;
    fgets(name1, 40, stdin);
    fgets(name2, 20, stdin);
    for (int i = 0; name1[i]!='\0'; i++)
    {
        if (name1[i] == '\n')
        {
            name1[i] = '\0';
            break;
        }
    }
    for (int i = 0; name2[i]!='\0'; i++)
    {
        if (name2[i] == '\n')
        {
            name2[i] = '\0';
            break;
        }
    }
    int n = strlen(name1);
    while (name2[count])
    {
        name1[n + count] = name2[count];
        count++;
    }
    name1[n + count] = '\0';
    puts(name1);
    return 0;
}