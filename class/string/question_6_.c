#include <stdio.h>
int main()
{
    char name1[50];
    int count = 0, sum = 0;
    gets(name1);
    while (name1[count])
    {
        if (name1[count] == ' ')
        {
            sum++;
        }
        count++;
    }
    printf("%d ", sum+1);
    return 0;
}