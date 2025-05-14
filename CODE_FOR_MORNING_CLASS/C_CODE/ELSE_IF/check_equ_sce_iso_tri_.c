/*
7..Write a C program to input sides of a triangle and check whether a triangle is equilateral,
scalene or isosceles triangle
*/
#include<stdio.h>
int main()
{
    int n1, n2, n3;
    printf("enter the first side of the triangle");
    scanf("%d", &n1);
    printf("enter the second side of the triangle");
    scanf("%d", &n2);
    printf("enter the third side of the triangle");
    scanf("%d", &n3);
    if (((n1 + n2) > n3) && ((n2 + n3) > n1) && ((n1 + n3) > n2))
    {
        if ((n1 == n2) && (n2 == n3) && (n1 == n3))
        {
            printf("equilateral triangle");
        }
        else if ((n1 == n2) || (n2 == n3) || (n1 == n3))
        {
            printf("scalene triangle");
        }
        else
        {
            printf("isosceles triangle");
        }
    }
    else
    {
        printf("invalid triangle:");
    }
    return 0;
}