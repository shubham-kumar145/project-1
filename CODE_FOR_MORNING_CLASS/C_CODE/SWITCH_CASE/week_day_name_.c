/*
5.Write a C program to input week number(1-7) and print the corresponding day of week Name
*/
#include <stdio.h>
int main()
{
    int num1;
    printf("list of day name\n");
    printf("1. MONDAY\n");
    printf("2. TUESDAY\n");
    printf("3. WEDNESDAY\n");
    printf("4. THRUSDAY\n");
    printf("5. FRIDAY\n");
    printf("6. SATURDAY\n");
    printf("7. SUNDAY\n");
    printf("8. EXIT\n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &num1);
    switch (num1)
    {
    case 1:
        printf("IT's MONDAY");
        break;
    case 2:
        printf("IT's TUESDAY");
        break;
    case 3:
        printf("IT's WEDNESDAY ");
        break;
    case 4:
        printf("IT's THRUSDAY ");
        break;
    case 5:
        printf("IT's FRIDAY ");
        break;
    case 6:
        printf("IT's SATURDAY ");
        break;
    case 7:
        printf("IT's SUNDAY ");
        break;
    default:
        printf("ENTER THE VALID CHOICE");
        break;
    }
    return 0;
}