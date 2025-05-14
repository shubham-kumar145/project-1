/*
2.Write a C program to input a character from user and check whether the given character
is alphabet or not.
*/
#include <stdio.h>
int main()
{
    char alp;
    printf("enter the character : ");
    scanf("%c", &alp);
    if ((alp >= 'a') && (alp <= 'z'))
    {
        printf("it is a alphabet:");
    }
    else if ((alp >= 'A') && (alp <= 'Z'))
    {
        printf("it is a alphabet:");
    }
    else
    {
        printf("not an alphabet:");
    }
    return 0;
}