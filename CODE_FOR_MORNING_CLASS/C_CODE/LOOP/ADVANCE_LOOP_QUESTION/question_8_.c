#include<stdio.h>
int main(){
    int num1,num2,num3,num4,rem,power,armstrong;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    printf("Armstrong numbers = ");
    while(num1<=num2){
        num3=num1;
        armstrong=0;
        while(num3>0){
            rem=num3%10;
            num3=num3/10;
            num4=num1;
            power=1;
            while(num4>0){
                num4=num4/10;
                power=power*rem;
            }
            armstrong=armstrong+power;
        }
        if(armstrong==num1){
            printf("%d, ",num1);
        }
        num1++;
    }
    return 0;
}