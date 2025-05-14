#include <stdio.h>
int reverse(int a, int b, int c);
int main()
{
    int num1, num2 = 0, num3 = 0;
    printf("enter the number: ");
    scanf("%d", &num1);
    int num4 = reverse(num2, num1, num3);
    printf("reverse number: %d", num4);
    return 0;
}
int reverse(int rem, int num, int rever)
{
    if (num == 0)
    {
        return rever;
    }
    rem = num%10;
    rever = rever * 10 +rem;
    reverse(rem,num/10,rever);
}

// #include <stdio.h>
// int reverse(int a,int b);
// int main()
// {
//     int num1,num2=0;
//     printf("enter the number: ");
//     scanf("%d", &num1);
//     int num3 = reverse(num1,num2);
//     printf("reverse number: %d", num3);
//     return 0;
// }
// int reverse(int a,int b)
// {
//     int rever=b;
//     if (a == 0)
//     {
//         return rever;
//     }
//     int rem = a % 10;
//     rever = rever * 10 + rem;
//     reverse(a / 10,rever);
// }