#include<stdio.h>
int main(){
    int num1,num2,count;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    while(num1<=num2){
        count = 0;
        for(int i =2;i<=num1/2;i++){
            if(num1%i==0){
                count++;
            }
        }
        if(count<=0){
            printf("%d is a prime number \n",num1);
        }
        num1++;
    }
    return 0;
}