#include <stdio.h>
int main()
{
    int a, b, c, count = 0;
    float sum = 0, avg;
    printf("enter the start point: ");
    scanf("%d", &a);
    printf("enter the end point: ");
    scanf("%d", &b);
    c = a;
    a++;
    while (a < b)
    {
        sum = sum + a;
        a++;
        count++;
    }
    avg = sum / count;
    // printf("total sum of number between %d and %d is %.2f\n",a,b,sum);
    printf("average of number between %d and %d is %.2f", c, b, avg);
    return 0;
}