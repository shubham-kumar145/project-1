#include <stdio.h>
int main()
{
    int number, temp = 1, series = 0, temp1;
    printf("ENTER THE NUMBER TILL YOU WANT: ");
    scanf("%d", &number);
    while (series <= number)
    {
        temp1 = series;
        printf("  %d  ", series);
        series = series + temp;
        temp = temp1;
    }
    return 0;
}