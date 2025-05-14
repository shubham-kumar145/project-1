#include<stdio.h>
void square(int a);
void triangle(int a);
int main(){
    int num1,option;
    printf("1. square pattern\n");
    printf("2. triangle pattern\n");
    printf("enter your choose: ");
    scanf("%d",&option);
    printf("enter the number: ");
    scanf("%d",&num1);
    if(option == 1){
        square(num1);
    }
    else if (option == 2)
    {
        triangle(num1);
    }
    else{
        printf("enter correct input: ");
    }
    return 0;
}
void square(int a){
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void triangle(int a){
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}