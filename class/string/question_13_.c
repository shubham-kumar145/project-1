/*
 13.Write a program to read a sentence and replace lowercase
 characters with uppercase and uppercase with lowercase characters .
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char st[30];
    fgets(st, 30, stdin);
    int n = strlen(st), i = 0;
    for (i = 0; i < n-1; i++)
    {
        if ((int)st[i] == 32)
        {
            st[i] = st[i];
        }
        else if((int)st[i] < 97)
        {
            st[i] = (char)(st[i] + 32);
        }
        else
        {
            st[i] = (char)(st[i] - 32);
        }
    }
    puts(st);
    return 0;
}