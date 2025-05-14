/*
6.Write a C program to input side of a triangle and check whether triangle is valid or not .
*/
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("enter the first side of the triangle: ");
    scanf("%d", &n1);
    printf("enter the second side of the triangle: ");
    scanf("%d", &n2);
    printf("enter the third side of the triangle: ");
    scanf("%d", &n3);
    if (((n1+n2)>n3)&&((n2+n3)>n1)&&((n1+n3)>n2))
    {
        printf("valid triangle");
    }
    else
    {
        printf("invalid triangle");
    }
    return 0;
}