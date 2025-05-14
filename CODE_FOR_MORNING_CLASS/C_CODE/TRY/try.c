#include<stdio.h>
int main(){
    double number,he,binary=0;
    long long rem,power=1;
    printf("enter the number: ");
    scanf("%lf",&number);
    number = number*256;
    long number2 = number;
    while(number2>0){
        rem=number2%2;
        number2=number2/2;
        binary=binary+(rem*power);
        power=power*10;
    }
    he = binary/100000000;
    printf("%lf\n",he);
    return 0;
}