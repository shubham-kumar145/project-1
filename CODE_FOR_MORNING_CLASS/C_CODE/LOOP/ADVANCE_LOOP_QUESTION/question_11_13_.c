#include <stdio.h>
int main()
{
    char ch;
    printf("enter the last char: ");
    scanf("%c", &ch);
    for (char c = 'A'; c <= ch; c++)
    {
        if (c == 'A')
        {
            for (char chh = 'A'; chh <= ch; chh++)
            {
                printf("%c ", chh);
            }
        }
        else
        {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}