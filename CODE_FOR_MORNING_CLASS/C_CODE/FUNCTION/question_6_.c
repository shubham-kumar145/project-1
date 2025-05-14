#include <stdio.h>
void input();
int add(int a, int b);
int main()
{
    input();
    return 0;
}
void input(){
    int num1, num2, sum;
    printf("enter the first number: ");
    scanf("%d", &num1);
    printf("enter the second number: ");
    scanf("%d", &num2);
    sum = add(num1, num2);
    printf("sum of %d and %d is %d ", num1, num2, sum);
}
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}