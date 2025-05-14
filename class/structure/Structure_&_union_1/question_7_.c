#include<stdio.h>
#include<string.h>
union data
{
    int int1;
    float float1;
    char char1;
};
int main(){
    union data n1;
    printf("enter the detail: \n");
    printf("enter the interger value: ");
    scanf("%d",&n1.int1);
    printf("interger value : %d \n",n1.int1);
    printf("enter a decimal value: ");
    scanf("%f",&n1.float1);
    printf("decimal value %f \n",n1.float1);
    printf("enter one charcter: ");
    scanf(" %c",&n1.char1);
    printf("last value or character %c \n",n1.char1);
}
