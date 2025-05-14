#include <stdio.h>
int main()
{
    char vol;
    printf("enter one character: ");
    scanf("%c",&vol);
    // if ((vol >= 'A') && (vol <= 'Z'))
    // {
    //     vol+=32;
    // }
    switch (vol)
    {
    case 'a':
    case 'A':
        printf("Vowel");
        break;
    case 'e':
    case 'E':
        printf("Vowel");
        break;
    case 'i':
    case 'I':
        printf("Vowel");
        break;
    case 'o':
    case 'O':
        printf("Vowel");
        break;
    case 'U':
    case 'u':
        printf("vowel");
        break;
    case 'q':
    case 'Q':
        printf("Consonant");
        break;
    case 'w':
    case 'W':
        printf("Consonant");
        break;
    case 'r':
    case 'R':
        printf("Consonant");
        break;
    case 't':
    case 'T':
        printf("Consonant");
        break;
    case 'p':
    case 'P':
        printf("Consonant");
        break;
    case 'l':
    case 'L':
        printf("Consonant");
        break;
    case 'k':
    case 'K':
        printf("Consonant");
        break;
    case 'h':
    case 'H':
        printf("Consonant");
        break;
    case 'g':
    case 'G':
        printf("Consonant");
        break;
    case 'f':
    case 'F':
        printf("Consonant");
        break;
    case 'd':
    case 'D':
        printf("Consonant");
        break;
    case 's':
    case 'S':
        printf("Consonant");
        break;
    case 'z':
    case 'Z':
        printf("Consonant");
        break;
    case 'x':
    case 'X':
        printf("Consonant");
        break;
    case 'c':
    case 'C':
        printf("Consonant");
        break;
    case 'v':
    case 'V':
        printf("Consonant");
        break;
    case 'b':
    case 'B':
        printf("Consonant");
        break;
    case 'n':
    case 'N':
        printf("Consonant");
        break;
    case 'm':
    case 'M':
        printf("consonant");
        break;
    default:
        printf("invalid input");
        break;
    }
    return 0;
}