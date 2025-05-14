/*
3.Find out the maximum number in the given two numbers using the ternary operator
*/
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d", &num1);
    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d", &num2);
    (num1 > num2) ? printf("NUMBER FIRST IS GREATER THAN SECOND BY %d", num1-num2) : printf("NUMBER SECOND IS GREATER THAN FIRST BY %d", num2-num1);
    return 0;
}