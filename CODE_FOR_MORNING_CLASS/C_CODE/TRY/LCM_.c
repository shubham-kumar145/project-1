#include <stdio.h>
int main()
{
    int i = 1;
    for(int i =1 ;i<=5;i++)
    // while (i <= 5)
    {
        if (i == 3)
        {
            // i++;
            continue;
        }
        printf("%d ",i);
        // i++;
    }

    return 0;
}