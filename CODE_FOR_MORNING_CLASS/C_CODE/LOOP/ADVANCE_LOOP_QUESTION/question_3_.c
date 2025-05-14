#include<stdio.h>
int main(){
    int num1,rem,max=0,min=99999999;
    printf("enter the number: ");
    scanf("%d",&num1);
    while(num1>0){
        rem=num1%10;
        num1=num1/10;
        if(max<rem){
            max=rem;
        }
        if(min>=rem){
            min=rem;
        }
    }
    printf("max digit is %d\n",max);
    printf("min digit is %d",min);
    return 0;
}