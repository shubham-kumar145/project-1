/*
Write a C program to input a character from user and check whether given character is
alphabet, digit or special character
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
    else if ((alp >= '0') && (alp <= '9'))
    {
        printf("it is a digit");
    }
    else
    {
        printf("it is a special character");
    }
    return 0;
}