#include<stdio.h>
int main(){
    long long num1,rem,power=1,binary=0;
    printf("enter the number: ");
    scanf("%lld",&num1);
    while(num1>0){
        rem = num1 %2;
        num1=num1/2;
        binary = binary+(rem*power);
        power=power*10;
    }
    printf("binary is %lld ",binary);
    return 0;
}