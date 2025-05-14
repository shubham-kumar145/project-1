#include <stdio.h>
int main()
{
    int num1, num2, num3;
    char operator1, ch = 'y';
    printf("enter the first number: ");
    scanf("%d", &num1);
    while ((ch == 'Y') || (ch == 'y'))
    {
        printf("enter the operator: ");
        scanf(" %c", &operator1);
        switch (operator1)
        {
        case '+':
            printf("enter the number: ");
            scanf("%d", &num2);
            printf("sum of the %d and %d is %d", num1, num2, (num1 = num1 + num2));
            break;
        case '-':
            printf("enter the number: ");
            scanf("%d", &num2);
            printf("substraction of the %d and %d is %d", num1, num2, (num1 = num1 - num2));
            break;
        case '*':
            printf("enter the number: ");
            scanf("%d", &num2);
            printf("multiplication of the %d and %d is %d", num1, num2, (num1 = num1 * num2));
            break;
        case '/':
            printf("enter the number: ");
            scanf("%d", &num2);
            printf("division of the %d and %d is %d", num1, num2, (num1 = num1 / num2));
            break;

        default:
            printf("\nenter the valid operator");
            break;
        }
        printf("\nwant to cont.: (press y to cont. ): ");
        scanf(" %c", &ch);
    }
    return 0;
}