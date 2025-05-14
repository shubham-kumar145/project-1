#include <stdio.h>
int main()
{
    char name1[50];
    int count = 0, sum = 0;
    gets(name1);
    while (name1[count])
    {
        if (name1[count] == 'a' || name1[count] == 'e' || name1[count] == 'i' || name1[count] == 'o' || name1[count] == 'u')
        {
            sum++;
        }
        count++;
    }
    printf("%d ", sum);
    return 0;
}