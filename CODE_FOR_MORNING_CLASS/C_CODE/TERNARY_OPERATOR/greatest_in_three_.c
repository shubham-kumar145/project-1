/*
5. Write a C program to find the maximum of three integers using ternary operator
*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d", &num1);
    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d", &num2);
    printf("ENTER THE THIRD NUMBER: ");
    scanf("%d", &num3);
    (num1 > num2) ? (num1 > num3) ? printf("NUMBER FIRST IS GREATEST") : printf("NUMBER THIRD IS GREATEST") : (num2 > num3) ? printf("NUMBER SECOND IS GREATEST")
                                                                                                                            : printf("NUMBER THIRD IS GREATEST");
    return 0;
}