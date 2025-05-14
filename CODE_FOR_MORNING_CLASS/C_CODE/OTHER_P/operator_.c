#include <stdio.h>
#include <math.h>

int main()
{
    printf("******************************************************************************************\n");
    printf("1.  Write a C program to perform addition of two integers using the '+' operator.\n");
    printf("2.  Write a C program to perform subtraction of two integers using the '-' operator.\n");
    printf("3.  Write a C program to perform multiplication of two integers using the '*' operator.\n");
    printf("4.  Write a C program to perform division of two integers using the '/' operator.\n");
    printf("5.  Write a C program to perform modulo operation on two integers using the '%%' operator.\n");
    printf("6.  Write a C program to perform increment operation on an integer using the '++' operator.\n");
    printf("7.  Write a C program to perform decrement operation on an integer using the '--' operator.\n");
    printf("8.  Write a C program to perform logical AND operation on two integers using the '&&' operator.\n");
    printf("9.  Write a C program to perform logical OR operation on two integers using the '||' operator.\n");
    printf("10. Write a C program to perform logical NOT operation on an integer using the '!' operator.\n");
    printf("11. Write a C program to swap two integers without using a third variable using Arithmetic operators.\n");
    printf("12. Write a C program to perform bitwise left shift operation on an integer using the '<<' operator.\n");
    printf("13. Write a C program to perform bitwise right shift operation on an integer using the '>>' operator.\n");
    printf("14. Write a C program to swap two integers without using a third variable using bitwise XOR operator.\n");
    printf("15. Write a C program to find the area of a circle using the '*' and '/' operator.\n");
    printf("******************************************************************************************\n");

    int number, a, b, c, d;
    printf("Enter the choice you want to perform: ");
    scanf("%d", &number);

    if (number == 1)
    {
        printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);
        printf("Sum of the a and b is: %d\n", a + b);
    }
    else if (number == 2)
    {
        printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);
        printf("Subtraction of a and b is: %d\n", a - b);
    }
    else if (number == 3)
    {
        printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);
        printf("Multiplication of the a and b is: %d\n", a * b);
    }
    else if (number == 4)
    {
        printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);
        if (b != 0)
            printf("Division of a and b is: %d\n", a / b);
        else
            printf("Error: Division by zero is not allowed.\n");
    }
    else if (number == 5)
    {
        printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);
        printf("Remainder of the a and b is: %d\n", a % b);
    }
    else if (number == 6)
    {
        printf("Enter the number: ");
        scanf("%d", &a);
        a++;
        printf("After using increment operator: %d\n", a);
    }
    else if (number == 7)
    {
        printf("Enter the number: ");
        scanf("%d", &a);
        a--;
        printf("After using decrement operator: %d\n", a);
    }
    else if (number == 8)
    {
        printf("Enter the 1st number: ");
        scanf("%d", &a);
        printf("Enter the 2nd number: ");
        scanf("%d", &b);
        printf("Enter the 3rd number: ");
        scanf("%d", &c);
        printf("Enter the 4th number: ");
        scanf("%d", &d);
        printf("Checking whether number 1 and number 3 are equal, and number 2 and number 4 are equal: ");
        if ((a == c) && (b == d))
            printf("Yes, they are equal to each other.\n");
        else
            printf("No, they are not equal.\n");
    }
    else if (number == 9)
    {
        printf("Enter the 1st number: ");
        scanf("%d", &a);
        printf("Enter the 2nd number: ");
        scanf("%d", &b);
        printf("Enter the 3rd number: ");
        scanf("%d", &c);
        printf("Enter the 4th number: ");
        scanf("%d", &d);
        printf("Checking whether one of them is equal to each other between (number 1, number 3 and number 2, number 4): ");
        if ((a == c) || (b == d))
            printf("Yes, one of them is equal to each other.\n");
        else
            printf("No, they are not equal.\n");
    }
    else if (number == 10)
    {
        printf("Enter the number: ");
        scanf("%d", &a);
        c = !(a);
        printf("Logical NOT of the number is: %d\n", c);
    }
    else if (number == 11)
    {
        printf("Enter the 1st number: ");
        scanf("%d", &a);
        printf("Enter the 2nd number: ");
        scanf("%d", &b);
        a = (a + b) - (b = a);

        printf("After swapping, first number is: %d\n", a);
        printf("After swapping, second number is: %d\n", b);
    }
    else if (number == 12)
    {
        printf("Left shift operator\n");
        printf("Enter the number: ");
        scanf("%d", &a);
        printf("How much you want to left shift: ");
        scanf("%d", &b);
        c = a << b; //(a/(pow(2,b)))
        printf("Result of left shift is: %d\n", c);
    }
    else if (number == 13)
    {
        printf("Right shift operator\n");
        printf("Enter the number: ");
        scanf("%d", &a);
        printf("How much you want to right shift: ");
        scanf("%d", &b);
        c = a >> b; // (a*(pow(2,b)))
        printf("Result of right shift is: %d\n", c);
    }
    else if (number == 14)
    {
        printf("Enter the 1st number: ");
        scanf("%d", &a);
        printf("Enter the 2nd number: ");
        scanf("%d", &b);
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        printf("After swapping, first number is: %d\n", a);
        printf("After swapping, second number is: %d\n", b);
    }
    else if (number == 15)
    {
        printf("Enter the radius of the circle: ");
        scanf("%d", &a);
        float pi = 3.14159;
        float area = pi * a * a;
        printf("Area of the circle is: %.2f\n", area);
    }
    else
    {
        printf("Enter the correct number.\n");
    }

    printf("******************************************************************************************\n");
    return 0;
}
