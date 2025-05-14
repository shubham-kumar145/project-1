#include <stdio.h>
int main()
{
    float num2, num3, input, cal = 0;
    int s_p = 1, num1;
    char ch;
    printf("***************************************************\n");
    printf("  list of function you can perform \n");
    printf("1. ADDITIONS\n");
    printf("2. SUBTRACTION\n");
    printf("3. MULTIPLICATION\n");
    printf("4. DIVISION\n");
    printf("5. PERCENTAGE\n");
    printf("6. REMINDER\n");
    printf("7. EXIT\n");
    printf("***************************************************\n");
    printf("Enter the number corresponding to your choice: ");
    scanf("%d", &num1);
    switch (num1)
    {
    case 1: // ADDITIONS
        printf("ENTER THE TOTAL NUMBER YOU WANT TO ADD: ");
        scanf("%f", &num2);
        while (s_p <= num2)
        {
            printf("ENTER THE %d NUMBER: ", s_p);
            scanf("%f", &input);
            cal += input;
            s_p++;
        }
        printf("TOTAL SUM : %.2f", cal);
        break;
    case 2: // SUBTRACTION
        printf("ENTER THE FIRST NUMBER: ");
        scanf("%f", &num2);
        printf("ENTER THE SECOND NUMBER: ");
        scanf("%f", &num3);
        printf("SUBSTRACTION OF %.2f AND %.2f IS %.2f\n", num2, num3, (cal = num2 - num3));
        printf("WANT TO SUBTRACT ANOTHER NUMBER: (PRESS 'Y' TO CONT. )\n");
        printf("***************************************************\n");
        scanf(" %c", &ch);
        while ((ch == 'y') || (ch == 'Y'))
        {
            printf("ENTER THE NUMBER: ");
            scanf("%f", &input);
            cal -= input;
            printf("SUBSTRACTION OF NUMBER IS: %.2f\n", cal);
            printf("WANT TO SUBTRACT ANOTHER NUMBER: (PRESS 'Y' TO CONT. ): ");
            scanf(" %c", &ch);
            printf("***************************************************\n");
        }
        printf("SUBSTRACTION OF NUMBER IS: %.2f", cal);
        break;
    case 3: // MULTIPLICATIONS
        printf("ENTER THE FIRST NUMBER: ");
        scanf("%f", &num2);
        printf("ENTER THE SECOND NUMBER: ");
        scanf("%f", &num3);
        printf("MULTIPLICATION OF %.2f AND %.2f IS %.2f\n", num2, num3, (cal = num2 * num3));
        printf("WANT TO MULTIPLICATION ANOTHER NUMBER: (PRESS 'Y' TO CONT. )\n");
        printf("***************************************************\n");
        scanf(" %c", &ch);
        while ((ch == 'y') || (ch == 'Y'))
        {
            printf("ENTER THE NUMBER: ");
            scanf("%f", &input);
            cal *= input;
            printf("MULTIPLICATION OF NUMBER IS: %.2f\n", cal);
            printf("WANT TO MULTIPLICATION ANOTHER NUMBER: (PRESS 'Y' TO CONT. ): ");
            scanf(" %c", &ch);
            printf("***************************************************\n");
        }
        printf("MULTIPLICATION OF THE NUMBER IS: %.2f", cal);
        break;
    case 4: // DIVISION
        printf("ENTER THE FIRST NUMBER: ");
        scanf("%f", &num2);
        printf("ENTER THE SECOND NUMBER: ");
        scanf("%f", &num3);
        if (num3 != 0)
        {
            printf("DIVISION OF %.2f AND %.2f IS %.2f\n", num2, num3, (cal = num2 / num3));
        }
        else
        {
            printf("NUMBER CAN'T DIVISIBLE BY 0");
        }
        break;
    case 5: // percentage
        printf("ENTER THE NUMBER OUT OF TOTAL: ");
        scanf("%f", &num2);
        printf("ENTER THE TOTAL NUMBER: ");
        scanf("%f", &num3);
        if (num3 != 0)
        {
            cal = (num2 / num3) * 100;
            printf("PERCENTAGE OF THE NUMBER IS: %.2f", cal);
        }
        else
        {
            printf("TOTAL NUMBER CAN'T BE 0");
        }
        break;
    case 6: // REMINDER (MODULUS)
        int a, b;
        printf("ENTER THE DIVIDEND: ");
        scanf("%d", &a);
        printf("ENTER THE DIVISIOR: ");
        scanf("%d", &b);
        if (b != 0)
        {
            cal = a % b;
            printf("REMINDER OF THE %d AND %d IS: %d", a, b, cal);
        }
        else
        {
            printf("ENTER CORRECT DIVISIOR: ");
        }
        break;
    case 7:
        return 0;
    default:
        printf("ENTER VALID INPUT");
        break;
    }
    return 0;
}