#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("enter the first number");
    scanf("%d", &num1);
    printf("enter the second number");
    scanf("%d", &num2);
    printf("enter the third number");
    scanf("%d", &num3);
    if ((num1 == num2) && (num2 == num3))
    {
        printf("all number is equal (number %d)", num1);
    }
    else
    {
        if ((num1 == num2) || (num2 == num3) || (num1 == num3))
        {
            if (num1 == num2)
            {
                if (num1 > num3)
                {
                    printf("first number and second number is greatest");
                }
                else
                {
                    printf("third number is greatest");
                }
            }
            else
            {
                if (num2 == num3)
                {
                    if (num2 > num1)
                    {
                        printf("third number and second number is greatest");
                    }
                    else
                    {
                        printf("first number is greatest");
                    }
                }
                else
                {
                    if (num1 == num3)
                    {
                        if (num2 > num1)
                        {
                            printf("third number and first number is greatest");
                        }
                        else
                        {
                            printf("second number is greatest");
                        }
                    }
                }
            }
        }
        else
        {
            if (num1 > num2)
            {
                if (num1 > num3)
                {
                    printf("first number is greatest (first number : %d )", num1);
                }
                else
                {
                    printf("third number is greatest (third number : %d )", num3);
                }
            }
            else
            {
                if (num2 > num3)
                {
                    printf("second number is greatest (second number : %d )", num2);
                }
                else
                {
                    printf("third number is greatest (third number : %d )", num3);
                }
            }
        }
    }
    return 0;
}