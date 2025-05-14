#include<stdio.h>
int main(){
    int num1,num2,temp1=1,sum=0,temp2;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    while(sum<=num2){
        temp2=sum;
        if(sum>=num1){
            printf("%d ",sum);
        }
        sum=sum+temp1;
        temp1=temp2;
    }
    return 0;
}