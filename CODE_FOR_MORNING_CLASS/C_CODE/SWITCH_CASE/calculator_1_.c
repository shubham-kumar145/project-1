#include <stdio.h>
int main()
{
    int num1,num2;
    char ch;
    // printf("LIST OF ARTHIMETIC OPERATOR: \n");
    // printf("1. '+' OPERATOR\n");
    // printf("2. '-' OPERATOR\n");
    // printf("3. '*' OPERATOR\n");
    // printf("4. '/' OPERATOR\n");
    // printf("5. (MODULUS) OPERATOR\n");
    // printf("ENTER the CORRESPONDING SYMBOL TO PERFORM YOUR TASK: ");
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d", &num1);
    printf("ENTER THE OPERATOR: ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
    int num3;
        printf("ENTER THE SECOND NUMBER: ");
        scanf("%d", &num3);
        printf("SUM OF %d AND %d IS: %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("ENTER THE SECOND NUMBER: ");
        scanf("%d", &num2);
        printf("SUBTRACTION OF %d AND %d IS: %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("ENTER THE SECOND NUMBER: ");
        scanf("%d", &num2);
        printf("MULTIPLICATION OF %d AND %d IS: %d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("ENTER THE SECOND NUMBER: ");
        scanf("%d", &num2);
        printf("DIVISION OF %d AND %d IS: %d", num1, num2, num1 / num2);
        break;
    case '%':
        printf("ENTER THE SECOND NUMBER: ");
        scanf("%d", &num2);
        printf("REMINDER OF %d AND %d IS: %d", num1, num2, num1 % num2);
        break;
    default:
        printf("ENTER VALID OPERATOR");
        break;
    }
    return 0;
}