#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char gmail1[30];
    int alp = 0, num = 0, sp_ch = 0;
    fgets(gmail1, 30, stdin);
    for (int i = 0; i < strlen(gmail1); i++)
    {
        if (isalpha(gmail1[i]))
        {
            alp++;
        }
        else if (isdigit(gmail1[i]))
        {
            num++;
        }
        else
        {
            sp_ch++;
        }
    }
    printf(" Number of Alphabets in the string is : %d\nNumber of Digits in the string is : %d\nNumber of Special characters in the string is : %d",alp,num,sp_ch-1);
    return 0;
}