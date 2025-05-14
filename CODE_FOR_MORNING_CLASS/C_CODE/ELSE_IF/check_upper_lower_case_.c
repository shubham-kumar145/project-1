/*
5.Write a C program to input character from user and check whether character is
uppercase or lowercase alphabet
*/
#include <stdio.h>
int main()
{
    char alp;
    printf("enter the character : ");
    scanf("%c", &alp);
    if ((alp >= 'a') && (alp <= 'z'))
    {
        printf("it is a lower case alphabet:");
    }
    else if ((alp >= 'A') && (alp <= 'Z'))
    {
        printf("it is a upper case alphabet:");
    }
    else
    {
        printf("not an alphabet:");
    }
    return 0;
}