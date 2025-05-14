#include <stdio.h>
#include <string.h>
int main()
{
    char name1[20], name2[20];
    int count = 1;
    fgets(name1, 20, stdin);
    fgets(name2, 20, stdin);
    for (int i = 0, j = 0; i < strlen(name1), j < strlen(name1); i++, j++)
    {
        if (name1[i] != name2[j])
        {
            count = 0;
            break;
        }
    }
    if (count == 1)
    {
        printf("string are equal");
    }
    else{
        printf("string are not equal");
    }
    return 0;
}