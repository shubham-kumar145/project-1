#include <stdio.h>
int main()
{
    char vol;
    printf("enter the charcter");
    scanf("%c", &vol);
    int a = ((vol == 'a') || (vol == 'e') || (vol == 'i') || (vol == 'o') || (vol == 'u') || (vol == 'A') || (vol == 'E') || (vol == 'I') || (vol == 'O') || (vol == 'U'));
    switch (a)
    {
    case 0:
        printf("constant");
        break;
    case 1:
        printf("vowel");
        break;

    default:
        printf("check");
        break;
    }
    return 0;
}