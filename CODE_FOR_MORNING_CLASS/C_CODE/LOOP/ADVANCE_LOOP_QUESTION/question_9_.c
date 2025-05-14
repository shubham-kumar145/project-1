#include<stdio.h>
int main(){
    int num1,num2,num3,rem,strong,power;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    printf(" Strong numbers = ");
    while(num1<=num2){
        num3=num1;
        strong=0;
        while(num3>0){
            rem=num3%10;
            num3=num3/10;
            power=1;
            while(rem>1){
                power=power*rem;
                rem=rem-1;
            }
            strong=strong+power;
        }
        if(strong==num1){
            printf("%d, ",num1);
        }
        num1++;
    }
    return 0;
}