#include <stdio.h>
int main()
{
    int num1, count = 0;
    printf("enter the number: ");
    scanf("%d", &num1);
    while (num1 > 0)
    {                  // num1=20 true
        num1 /= 10;    // num1=20/10
        count++;       // count=count+1
    }
    printf("number of digit is: %d", count);
    return 0;
}
