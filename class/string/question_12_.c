//  12.Write a program to check whether a string is palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{
    char par[30];
    fgets(par, 30, stdin);
    int n = strlen(par);
    int count = 0;
    for (int i = 0, j = n - 2; i < n / 2; i++, j--)
    {
        if (par[i] == par[j])
        {
            count++;
        }
    }
    puts(par);
    if (count == n / 2)
    {
        printf(" is Palindrome string.");
    }
    else
    {
        printf(" is not a Palindrome string.");
    }
    return 0;
}