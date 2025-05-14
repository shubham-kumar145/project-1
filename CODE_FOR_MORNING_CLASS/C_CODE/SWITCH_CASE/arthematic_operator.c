/*
3. Write a C program to implement a menu-driven calculator using switch
statement for arithmetic operators and switch statement for input validation
*/
#include <stdio.h>
int main()
{
    int choice, num1, num2, cal;
    printf("LIST OF ARITHMETIC OPERATOR\n");
    printf("1. ADDITIONS \n");
    printf("2. SUBTRACTION \n");
    printf("3. MULTIPLICATION \n");
    printf("4. DIVISION\n");
    printf("5. MODULUS \n");
    printf("6. EXIT \n");
    printf("********************************\n ");
    printf("Enter the number corresponding to your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("enter the first number: ");
        scanf("%d", &num1);
        printf("enter the second number: ");
        scanf("%d", &num2);
        break;
    }
    switch (choice)
    {
    case 1:
        cal = num1 + num2;
        printf("sum of %d and %d is: %d", num1, num2, cal);
        break;
    case 2:
        cal = num1 - num2;
        printf("subtraction of %d and %d is: %d", num1, num2, cal);
        break;
    case 3:
        cal = num1 * num2;
        printf("multiplication of %d and %d is: %d", num1, num2, cal);
        break;
    case 4:
        cal = num1 / num2;
        printf("division of %d and %d is: %d", num1, num2, cal);
        break;
    case 5:
        cal = num1 % num2;
        printf("modulus of %d and %d is: %d", num1, num2, cal);
        break;
    case 6:
        return 0;
    default:
        printf("enter the correct choice");
        break;
    }
    return 0;
}