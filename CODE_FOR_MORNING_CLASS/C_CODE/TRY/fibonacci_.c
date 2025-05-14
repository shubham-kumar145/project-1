#include <stdio.h>
int main()
{
    int number, temp = 1, serise = 0, temp1;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &number);
    while (number > 0)
    {
        temp1 = serise;
        printf("  %d  ", serise);
        serise = serise + temp;
        temp = temp1;
        number--;
    }
    return 0;
}