/*
3. Write C Program to input a character from user and check whether it is vowel or
consonant
*/
#include <stdio.h>
int main()
{
    char ch;
    printf("enter one character: ");
    scanf("%c", &ch);
    if ((ch == 'a') || (ch == 'i') || (ch == 'e') || (ch == 'o') || (ch == 'u'))
    {
        printf("it is an vowel");
    }
    else if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'U') || (ch == 'O'))
    {
        printf("it is an vowel");
    }
    else
    {
        printf("it is not an vowel");
    }
    
    return 0;
}
