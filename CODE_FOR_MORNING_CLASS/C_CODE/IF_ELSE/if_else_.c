#include <stdio.h>
int main()
{
    int number;
    printf("enter any number");
    scanf("%d", &number);
    if (number == 1) // greater
    {
        int a = 5, b = 7;
        if (a < b)
        {
            printf("b is greater then a %d", b);
        }
        if (a > b)
        {
            printf("a is greater then b %d", a);
        }
    }
    if (number == 2) // age
    {
        int age;
        printf("enter you your age: ");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("you are now an adult");
        }
    }
    if (number == 3) // positive , negative,zero
    {
        int num;
        printf("enter any number");
        scanf("%d", &num);
        if (num > 0)
        {
            printf("positive");
        }
        if (num < 0)
        {
            printf("negative");
        }
        if (num == 0)
        {
            printf("equal to zero");
        }
    }
    if (number == 4) // odd , even
    {
        int num;
        printf("enter any number");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }
    if (number == 5)
    {
        int num;
        printf("enter any number");
        scanf("%d", &num);
        if (num == 0)
        {
            printf("\nequal to zero\n");
        }
        else
        {
            if (num > 0)
            {
                printf("\nnumber is positive\n");
            }
            else
            {
                printf("\nnumber is negative\n");
            }
        }
    }
    return 0;
}