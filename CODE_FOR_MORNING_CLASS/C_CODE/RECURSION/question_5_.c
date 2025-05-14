#include<stdio.h>
int power(int a,int b);
int main()
{
    int pow,base,sum;
    printf("enter the base: ");
    scanf("%d",&base);
    printf("enter the power: ");
    scanf("%d",&pow);
    sum = power(base,pow);
    printf("sum = %d",sum);
    return 0;
}
int power(int a,int b){
    if(b==0){
        return 1;
    }
    int sum = a * power(a,b-1);
    return sum;
}