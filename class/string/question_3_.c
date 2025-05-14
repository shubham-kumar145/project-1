#include <stdio.h>
int main()
{
    char name1[50], name2[50];
    int count = 0;
    fgets(name1, 50, stdin);
    while (name1[count])
    {
        name2[count] = name1[count];
        count++;
    }
    name2[count] = '\0';
    puts(name2);
    return 0;
}